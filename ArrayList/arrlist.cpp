#include "arrlist.h"
#include <string.h>

void List_Init(AList *inputAL){
    //inputAL->numberofdata = 0; 
    //inputAL->curr_pos = 0;
    memset(inputAL,0,sizeof(AList)); //if you see this line of memset for initializing the inputAL->arr[], please tell me another method
    // I dont know why inputAL->arr[arr_len] = {0,}; isn't working.
}

Ldata List_InputData(AList *inputAL, Ldata data){
    Ldata temp_val;
    inputAL->arr[inputAL->numberofdata] = data;
    temp_val = inputAL->arr[inputAL->numberofdata];
    inputAL->numberofdata++;
    return temp_val;
}

Ldata List_ref_First(AList *inputAL){
    if (inputAL->numberofdata ==0){
        return -1;
    }
    inputAL->curr_pos=0;
        printf("첫번째 값은 %d입니다.\n",inputAL->arr[inputAL->curr_pos]);
    return inputAL->arr[inputAL->curr_pos];
}

Ldata List_ref_Next(AList *inputAL){
    if (inputAL->curr_pos >= (inputAL->numberofdata-1)){
        return -1;
    }
    inputAL->curr_pos++;
        printf("%d위치에 값은 %d입니다.\n",inputAL->curr_pos,inputAL->arr[inputAL->curr_pos]);
    return inputAL->arr[inputAL->curr_pos];
}

int List_removedata(AList *inputAL){
    if(inputAL->numberofdata == 0){
        return -1;
    }
    
    int temp_curr_pos = inputAL->curr_pos;
    int temp_num_data = (inputAL->numberofdata -1);
    Ldata temp_remove_data = inputAL->arr[inputAL->curr_pos];
    int i;
    
    for (i = temp_curr_pos; i <= temp_num_data; i++){
        inputAL->arr[i]= inputAL->arr[i+1];
    }

    inputAL->curr_pos--;
    inputAL->numberofdata--;

    return temp_remove_data;   
}

int List_data_count(AList *inputAL){
    return inputAL->numberofdata;
}