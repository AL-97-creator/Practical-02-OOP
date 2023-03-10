#include <iostream>

extern void print_scaled(int array[3][3],int scale);

int main(){
    int array[3][3]={1,1,1,1,1,1,1,1,1};
    int scale=3;
    print_scaled(array,scale);
}