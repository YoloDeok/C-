#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

// change
// 1. remove tail in LinkedList (change: ListInit & LInsert function (linkedlist.cpp))
// 2. sort function is added in LinkedList

int WhoIsPrecede(int d1, int d2){
    if(d1<d2){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int data;
    int endloop;
    int numdata;

    List list;
    ListInit(&list);

    SetSortRule(&list, WhoIsPrecede);

    LInsert(&list, 111);
    LInsert(&list, 11);
    LInsert(&list, 33);
    LInsert(&list, 44);
    LInsert(&list, 11);
    LInsert(&list, 55);

    numdata = LCount(&list);
    printf("numdata:%d\n",numdata);
    
    endloop = LFirst(&list, &data);
    printf("val: %d ",data);
        
        if(data == 33){
            LRemove(&list);
        }
        
    while(endloop != 0){
        endloop = LNext(&list, &data);
        printf("%d ",data);

        if(data == 33){
            LRemove(&list);
        }

    }

    printf("\n");
    printf("\n");
    numdata = LCount(&list);
    printf("numdata:%d\n",numdata);

    

    endloop = LFirst(&list, &data);
    printf("val: %d ",data);
    
    while(endloop != 0){
        endloop = LNext(&list, &data);
        printf("%d ",data);
    }



    printf("\n");
    

    return 0;
}