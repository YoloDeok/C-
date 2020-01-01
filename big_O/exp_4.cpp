#include <stdio.h>
#include <iostream>

// calculate the big-o

#if 0
void printParis(int[] arrayA, int[] arrayB){
    for (int i = 0; i<arrayA.length; i++){
        for (int j = i+1; j<arrayB.length; j++){
            System.out.println(arrayA[i]+","+arrayB[j]);
        }
    }
}
#endif

int main(){
    printf("BigO:O(ab)\n");
    return 0;
}