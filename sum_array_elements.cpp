#include <iostream>

int sum_array_elements(int integers[], int length){
    int sum=0;
    for (int i=0;i<length;i++){
        sum=sum+integers[i];
    }
    return sum;
}