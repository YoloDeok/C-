#include <stdio.h>
#include <iostream>

// calculate the big-o

#if 0
void printParis(int[] array){
    for (int i = 0; i<array.length; i++){
        for (int j = i+1; j<array.length; j++){
            System.out.println(array[i]+","+array[j]);
        }
    }
}
#endif

int main(){
    printf("BigO:O(n^2)\n");
    return 0;
}