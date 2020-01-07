#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include <stdio.h>
#define Arr_Len 100


typedef int Ldata;

typedef struct{
    int arr[Arr_Len];
    int numberofdata;
    int curr_pos;
}ArrayList;

typedef ArrayList AList;

void List_Init(AList *inputAL);
Ldata List_InputData(AList *inputAL, Ldata data);
Ldata List_ref_First(AList *inputAL);
Ldata List_ref_Next(AList *inputAL);
int List_removedata(AList *inputAL);
int List_data_count(AList *inputAL);

#endif