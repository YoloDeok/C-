#include <stdio.h>
#include <stdlib.h>
#include "simple_linkedlist.h"

int main(){

#if 0
//simple linkedlist ver 00, head to tail based linkedlist
    Node * head = NULL;
    Node * tail = NULL;
    Node * curr = NULL;

    printf("if you exit the program, enther the -1\n");

    while(1){
        int temp_input_val = 0; 
        printf("input_number: ");
        scanf("%d",&temp_input_val);

        if(temp_input_val == -1){
            break;
        }
        else{
            
            Node *NewNode = (Node*)malloc(sizeof(Node));
            NewNode->data = temp_input_val;
            NewNode->next = NULL;

            if(head == NULL){
                head = NewNode;
                tail = NewNode;
            }
            else{
                tail->next = NewNode;
                tail = NewNode;
            }
        }
    }
        printf("\n");
        printf("printf numbers\n");

            if(head == NULL){
                return 0;
            }
            else{
                curr = head;
                printf("input:%d", curr->data);

                while(curr->next != NULL){
                    curr = curr->next;
                    printf(" ,%d", curr->data);
                }
                printf("\n");
            }

        printf("\n");
        printf("free memory\n");

            if(head == NULL){
                return 0;
            }
            else
            {
                Node *DelNode = head;
                Node *DelNodeNext = head->next;
                printf("delete:%d",head->data);
                free(DelNode);

                while(DelNodeNext != NULL){
                    DelNode = DelNodeNext;
                    DelNodeNext = DelNode->next;
                    printf(" ,%d",DelNode->data);
                    free(DelNode);
                }
                printf("\n");
            }
            


#elif 1 
//dummy node based linkedlist

    Node * head = NULL;
    Node * tail = NULL;
    Node * curr = NULL;

    printf("if you exit the program, enther the -1\n");

    head = (Node *)malloc(sizeof(Node)); // add dummy node
    tail = head;

    while(1){
        int temp_input_val = 0; 
        printf("input_number: ");
        scanf("%d",&temp_input_val);

        if(temp_input_val == -1){
            break;
        }
        else{
            
            Node *NewNode = (Node*)malloc(sizeof(Node));
            NewNode->data = temp_input_val;
            NewNode->next = NULL;
            /*
            if(head == NULL){
                head = NewNode;
                tail = NewNode;
            }
            else{
                tail->next = NewNode;
                tail = NewNode;
            }
            */
           tail->next = NewNode;
           tail = NewNode;
        }
    }
        printf("\n");

            if(tail == head){
                return 0;
            }
            else{
                printf("printf numbers\n");
                curr = head;
                //printf("input:%d", curr->data);
                printf("input:");
                while(curr->next != NULL){
                    curr = curr->next;
                    printf(" %d,", curr->data);
                }
                printf("\n");
            }

        printf("\n");
        printf("free memory\n");

            if(tail == head){
                return 0;
            }
            else
            {
                Node *DelNode = head;
                Node *DelNodeNext = head->next;
                //printf("delete:%d",head->data);
                //free(DelNode);
                printf("delete:");

                while(DelNodeNext != NULL){
                    DelNode = DelNodeNext;
                    DelNodeNext = DelNode->next;
                    printf(" %d,",DelNode->data);
                    free(DelNode);
                }
                printf("\n");
            }

#endif

    return 0;
}