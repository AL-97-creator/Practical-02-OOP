#include <iostream>

int is_identity(int array[3][3]){
    int temp=0;
    int check=0;
    int sum=0;
    int checked=0;
    for (int i=0;i<3;i++){
        if (array[i][i]==1){
            for (int j=0;j<3;j++){
                if (array[i][j]==1 || array[i][j]==0){
                    checked=1;;
                }
            }
            if (checked==1){
            for (int k=0;k<3;k++){
                sum=sum+array[i][k];
                if (sum==1){
                    check=check+1;
                }
                sum=0;
            }}
        }

        }
    if (check==3){
        return 1;
    } else {
        return 0;
    }
}