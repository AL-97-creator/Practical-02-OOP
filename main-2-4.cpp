#include <iostream>
#include <stdio.h>

extern int sum_min_max(int integers[], int length);

int main(){
    int integers[5]={1,2,4,2,1};
    int length=5;
    int sum=sum_min_max(integers,length);
    std::cout<<sum<<std::endl;
}