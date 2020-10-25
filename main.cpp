/*
edit
WAP to construct simple linear linked list using dynamic memory allocation for the
given elements with the following functions,
(a) Inserting a new node, - Append ---------------------------------------------------------DONE
(b) Accessing a node (finding the position wrt header),
(c) Removing a node with particular key value,
(d) Complete deletion of a linked list, and
(e) Displaying the current list. -----------------------------------------------------------DONE
(f) Copy the linked list and return the pointer of the new list.
Implement the above program for the elements as Strings.
*/
#include<iostream>
#include<iomanip>
struct node
{
    int data;
    node* nextNode;
};
void append(node* &head, int n){
    node* temp = head;
    node* last = NULL;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Enter the element to append: ";
        std::cin>>temp->data;
        last = temp;
        temp->nextNode = new node;
        temp = temp->nextNode;
    }
    last->nextNode = NULL;
    delete temp;
}
void print(node* head){
    std::cout<<std::setw(5)<<"NODE"<<std::setw(20)<<"ELEMENT\n";
    int number = 1;
    while (head != NULL)
    {
        std::cout<<std::setw(3)<<number<<std::setw(18)<<head->data<<std::endl;
        head = head->nextNode;
        number++;
    }
    
    delete head;
}
void deleteList(node* &head){
    
    while (head != NULL)
    {
        node* temp = head;
        head = head->nextNode;
        delete temp;
    }
    //delete head;
}
void replaceElement(node* &head, int position, int value){
    node* temp = head;
    if (position == 1)
    {
        head->data = value;
    }
    else
    {        
    for (int i = 0; i < (position-2); i++)
    {
        std::cout<<"lol\n";
        temp = temp->nextNode;
        std::cout<<"lol\n";
    }
    temp = temp->nextNode;
    temp->data = value;
    }
}
void insertNode(node* &head, int position, int value){
    node* temp = head;
    for (int i = 0; i < position-1; i++)
    {
        temp = temp->nextNode;
    }
    node* new_node = new node;
    new_node->nextNode = temp->nextNode;
    temp->nextNode = new_node;
    new_node->data = value;
}
void bubbleSort(node* &head){
    
}
int main(){
    std::cout<<"How many elements do you wish to append: ";
    int num; std::cin>>num;
    node* head = new node;
    append(head, num);
    print(head);
    std::cout<<"Excellent!!!! Now let us replace an element in the linked list.\nIn which position do you want to replace the element?\nEnter position: ";
    int position; std::cin>>position;
    std::cout<<"What is the new element?\nEnter response: ";
    int response; std::cin>>response;
    replaceElement(head, position, response);
    print(head);
    std::cout<<"Well done! Now let us insert a node at a given position.\nAt which position do you want to insert a node?\nEnter position: ";
    std::cin>>position;
    std::cout<<"What must be the value to be inserted there?\nEnter Value: ";
    std::cin>>response;
    insertNode(head, position, response);
    print(head);
    deleteList(head);
    return 0;
}