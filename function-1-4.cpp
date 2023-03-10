#include <iostream>

void print_scaled(int array[3][3],int scale){
    int scalarr[3][3];
    for (int i=0;i<3;i++){
        for (int k=0;k<3;k++){
            scalarr[i][k]=(scale)*(array[i][k]);
        }
    };
    for (int i=0;i<3;i++){
        std::cout << scalarr[0][i] << " ";
        }
    std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << scalarr[1][i] << " ";
        }
        std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << scalarr[2][i] << " ";
        }
        std::cout << ""<<std::endl;
    }