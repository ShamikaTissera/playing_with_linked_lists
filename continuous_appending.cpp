#include<iostream>
void test1(int **ptr){
    std::cout<<"int **ptr =   "<<**ptr<<std::endl;
    int c = 10;
    *ptr = &c;
}
void test2(int* &ptr){
    std::cout<<"int* &ptr =   "<<*ptr<<std::endl;
    *ptr = 89;
}
void test3(int& ptr){
    std::cout<<"int* ptr =    "<<ptr<<std::endl;
    int c = 10;
    //ptr = &c;
}
int main(){
    int a = 534654;
    int* ptr = &a;
    std::cout<<"Original ptr: "<<ptr<<std::endl;
    test3(ptr);
  // test1(&ptr);
    //test2(ptr);
    
    std::cout<<"After adjustment: a = "<<*ptr<<std::endl;
    return 0;
}