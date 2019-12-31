#include <stdio.h>
#include <iostream>
// calculate the big-o

#if 0
void foo(int[] array){
    int sum = 0;
    int product = 1;
    for (int i = 0; i< array.length; i++){
        sum+=array[i];
    }

    for (int i = 0; i<array.length; i++){
        product *= array[i];
    }

    System.out.println(sum + "," + product);
}
#endif

int main(){
    printf("BigO:O(n)\n ");
    return 0;
}