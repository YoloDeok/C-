#include <stdio.h>

// Time O(n)
// Space O(1) 
// Call n iteration, but call stack is diffiernt at the same time when compared to exp1_O_n.cpp

int pairSum(int a, int b){
    return a+b;
}

int pairSumSequence(int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += pairSum(i, i+1);
    }
    return sum;
}

int sum_val = 0;

int main(){
    
    sum_val = pairSumSequence(5);
    printf("Sum_val:%d\n",sum_val);
    /* 0+1 + 1+2 + 2+3 + 3+4 + 4+5 = 25*/
    return 0;    
}