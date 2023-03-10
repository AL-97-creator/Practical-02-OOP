#include <iostream>


extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);


int sum_if_palindrome(int integers[], int length){
    if (length<=0){
        return -1;
    }
    int check=is_palindrome(integers,length);
    int sum;
    if (check==1){
        sum=sum_array_elements(integers,length);
    } else if (check==0){
        return -2;
    }
    return sum;
}