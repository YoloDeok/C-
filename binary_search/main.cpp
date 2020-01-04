#include <stdio.h>
#include <iostream>

//big-o O(logN)
int Binary_Search(int arr[], int length, int target){

    int mid;
    int first = 0;
    int last = length-1;
    
    while(first<=last){

        mid = (first+last)/2;

        if(target==arr[mid]){
            return mid;
        }
        else
        {
            if(target<arr[mid]){
                last = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
            
        }
    }
    return -1;
}


int main(void){
    int arr[]= {1, 3, 5, 7, 9}; //array가 정렬되어야 한다.
    int pos;
    int target;
    
    target = 5; 
    pos = Binary_Search(arr, sizeof(arr)/sizeof(int), target);
    printf("%d은 행렬의 %d에 위치해 있다.\n",target,pos);

    target = 6;
    pos = Binary_Search(arr, sizeof(arr), target);
    printf("%d은 행렬의 %d에 위치해 있다.\n",target,pos);
    return 0;
}