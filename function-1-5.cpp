#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]){
    int newarr[3][3];
    for (int i=0;i<3;i++){
        for (int k=0; k<3; k++){
            newarr[i][k]=array1[i][k]+array2[i][k];
        }
    };
    for (int i=0;i<3;i++){
        std::cout << newarr[i][0] << " ";
        }
    std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << newarr[i][1] << " ";
        }
        std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << newarr[i][2] << " ";
        }
        std::cout << ""<<std::endl;
    }