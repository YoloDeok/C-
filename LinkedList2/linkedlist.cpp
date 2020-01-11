#include "linkedlist.h"

void ListInit(List *plist){
    plist->head = (Node *)malloc(sizeof(Node));
    plist->head->data = -1;
    plist->head->next = NULL;
    plist->tail = plist->head;
    plist->curr = NULL;
    plist->before = NULL;
    plist->numofdata = 0;
}

void LInsert(List *plist, Ldata data){
    Node *NewNode = (Node *)malloc(sizeof(Node));
    NewNode->data = data;
    NewNode->next = NULL;
    plist->tail->next = NewNode;
    plist->tail = NewNode;
    (plist->numofdata)++;
}

int LFirst(List *plist, Ldata *data){

    if(plist->head->next == NULL){
        return 0;
    }

    plist->before = plist->head;
    plist->curr = plist->head->next;
    *data = (plist->curr->data);
    return 1;
}

int LNext(List *plist, Ldata *data){
    
    plist->before = plist->curr;
    plist->curr = plist->curr->next;
    *data = (plist->curr->data);  

    if(plist->curr->next == NULL){
        return 0;
    }

    return 1;
}

Ldata LRemove(List *plist){
    int rdata;

    Node *rpos = plist->curr;
    rdata = plist->curr->data;
    plist->before->next = plist->curr->next;
    plist->curr = plist->before;
    free(rpos);
    (plist->numofdata)--;

    return rdata;
}

int LCount(List *plist){
    return (plist->numofdata);
}