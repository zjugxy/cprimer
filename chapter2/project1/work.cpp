#include<iostream>
#include<typeinfo>
void test(){
        int temp;
    printf("temp = %d",temp); 
}
int temp;

extern double pi;

int main(){
    int a =10;
    int *ptr = &a;
    int b = 20;
    std::cout<<"ptr = "<<ptr<<"*ptr = "<<*ptr<<std::endl;

    *ptr = 200;
    std::cout<<"ptr = "<<ptr<<"*ptr = "<<*ptr<<std::endl;

    ptr = &b;
    std::cout<<"ptr = "<<ptr<<"*ptr = "<<*ptr<<std::endl;

}