#include <stdio.h>
#include "arrlist.h"

int main(){
    Ldata temp_test_val1, temp_test_val2, temp_test_val3, temp_test_val4,temp_test_val5;
    AList array_list;
    //AList array_list = {}; == List_init(&array_list);
    List_Init(&array_list); //array list initialize
    List_InputData(&array_list, 11);
    List_InputData(&array_list, 22);
    List_InputData(&array_list, 33);

    temp_test_val1 = List_ref_First(&array_list);
    temp_test_val5 = List_removedata(&array_list);
    temp_test_val2 = List_ref_Next(&array_list);
    temp_test_val3 = List_ref_Next(&array_list);
    temp_test_val4 = List_ref_Next(&array_list);

    int arr[100]= {0,};
    int test_count = List_data_count(&array_list);
    int test_val = 0;
    
    return 0;
}