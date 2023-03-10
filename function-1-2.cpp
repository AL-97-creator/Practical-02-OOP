#include <iostream>

int is_identity(int array[10][10]){
    int temp=0;
    int check=0;
    int sum=0;
    for (int i=0;i<10;i++){
        if (array[i][i]==1){
            for (int j=0;j<10;j++){
                if (array[i][j]!=1 || array[i][j]!=0){
                    return 0;
                }
            }
            for (int k=0;k<10;k++){
                sum=sum+array[i][k];
                if (sum==1){
                    check=check+1;
                }
                sum=0;
            }
        }

        }
    if (check==10){
        return 1;
    } else {
        return 0;
    }
}