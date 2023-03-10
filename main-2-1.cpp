#include <iostream>
#include <stdio.h>

extern void print_binary_str(std::string decimal_number);

int main(){
    std::string decimal_number = "21";
    print_binary_str(decimal_number);
}