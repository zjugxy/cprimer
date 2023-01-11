#include<iostream>

#include"paras.h"
constexpr int size(){
    return 4;
}

int main(){
int a = 3,b = 4;
decltype(a) c = a;
decltype(a = b) d;
printf("%d %d %d %d ",a,b,c,d);
}
