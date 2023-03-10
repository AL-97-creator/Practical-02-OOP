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