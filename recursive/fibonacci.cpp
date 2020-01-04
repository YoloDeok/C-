#include <stdio.h>
#include <iostream>

// I guess Big-O is O(2^n)

int fib(int num){
    if(num == 1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}

int main(){

    int fib_num;

    fib_num = fib(14);
    printf("%d\n",fib_num);

    return 0;
}