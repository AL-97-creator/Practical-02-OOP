#include <iostream>
#include <string>
#include <cstdio>

void print_binary_str(std::string decimal_number){
    int dec_num= std::stoi(decimal_number,nullptr,10);
    int track=dec_num;
    int place=0;
    while (track!=0){
        track=track/2;
        place++;
    }
    int array[place];
    int temp=dec_num;
    int k=0;
    while (temp>0){
        array[k] = temp % 2;
        temp = temp/2;
        k++;
    }
    int size=(sizeof(array)/sizeof(*array));
    int temp2;
    for (int i=0; i<(size/2); i++){
        temp2=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp2;
    }
    for (int i=0; i<size; i++){
        std::cout << array[i];
    }
std::cout << "" << std::endl;
}