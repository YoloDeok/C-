#include <stdio.h>
#include <iostream>

//big-o O(n)
int Linear_Search(int arr[], int length, int target){

    int iter;
    
    for(iter = 0; iter<length; iter++){
        if(arr[iter]==target){
            return iter;
        }
    }
    return -1;
}


int main(void){
    int arr[]= {3, 7, 5};
    int pos;
    int target;
    
    target = 5;
    pos = Linear_Search(arr, sizeof(arr), target);
    printf("%d은 행렬의 %d에 위치해 있다.\n",target,pos);

    target = 1;
    pos = Linear_Search(arr, sizeof(arr), target);
    printf("%d은 행렬의 %d에 위치해 있다.\n",target,pos);
    return 0;
}