#include <iostream>
extern int is_identity(int array[10][10]);

int main(){
    int array[10][10]={0};
    int sum=is_identity(array);
    std::cout << sum << std::endl;
}