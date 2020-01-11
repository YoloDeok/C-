#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main(){

    int data;
    int endloop;
    int numdata;

    List list;
    ListInit(&list);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 33);
    LInsert(&list, 44);
    LInsert(&list, 55);

    numdata = LCount(&list);
    printf("numdata:%d\n",numdata);
    
    endloop = LFirst(&list, &data);
    printf("val: %d ",data);

        if(data == 11){
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