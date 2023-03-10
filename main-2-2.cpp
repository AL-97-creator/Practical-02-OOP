#include <iostream>
#include <stdio.h>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[8]={1,0,0,0,0,1,0,1};
    int num=binary_to_int(binary_digits,8);
    std::cout<<num<<std::endl;
}