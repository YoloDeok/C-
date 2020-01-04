#include <stdio.h>
#include <iostream>

// I guess Big-O is O(N)

int factorial(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

int main(){

    int fac_num;

    fac_num = factorial(9);
    printf("%d\n",fac_num);

    return 0;
}