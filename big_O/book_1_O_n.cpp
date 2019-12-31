#include <stdio.h>

// Time O(n)
// Space O(n) 
// Call n iteration

int sum(int n){
    if(n <= 0){
        return 0;
    }
    return n + sum(n-1);
}

int sum_val = 0;

int main(){
    
    sum_val = sum(5);
    printf("Sum_val:%d\n",sum_val);
    /* 5+4+3+2+1 = 15*/
    return 0;    
}