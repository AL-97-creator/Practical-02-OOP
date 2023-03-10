#include <iostream>

bool is_palindrome(int integers[], int length){
    int check=0;
    for (int i=0;i<(length/2);i++){
        if (integers[i]==integers[length-1-i]){
            check=check+1;
        }
    };
    if (check==(length/2)){
        return 1;
    } else {
        return 0;
    }
}


int sum_array_elements(int integers[], int length){
    int sum=0;
    for (int i=0;i<length;i++){
        sum=sum+integers[i];
    }
    return sum;
}


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