#include <iostream>
extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int sum=sum_diagonal(array);
    std::cout << "The sum of the diagonal is: " << sum << std::endl;
}