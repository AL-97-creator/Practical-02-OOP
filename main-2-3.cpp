#include <iostream>
#include <stdio.h>

extern int sum_if_palindrome(int integers[], int length);

int main(){
    int integers[5]={1,2,4,2,1};
    int length=5;
    int sum=sum_if_palindrome(integers,length);
    std::cout<<sum<<std::endl;
}