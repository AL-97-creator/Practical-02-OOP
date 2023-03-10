#include <iostream>

void print_scaled(int array[3][3],int scale){
    int scalarr[3][3];
    for (int i=0;i<3;i++){
        for (int k=0;k<3;k++){
            scalarr[i][k]=(scale)*(array[i][k]);
        }
    };
    for (int i=0;i<3;i++){
        std::cout << scalarr[i][0] << " ";
        }
    std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << scalarr[i][1] << " ";
        }
        std::cout << ""<<std::endl;
    for (int i=0;i<3;i++){
        std::cout << scalarr[i][2] << " ";
        }
        std::cout << ""<<std::endl;
    }