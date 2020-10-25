#include<iostream>
int main(){
    int a = 7903;
    std::cout<<&a<<std::endl;
    int& b = a; // No seperate variable called 'b' is created. 'b' is 'a'. Any changes to 'b' happens to 'a'.
    // b is an alias of 'a'
    std::cout<<&b<<std::endl;
    return 0;
}