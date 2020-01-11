#ifndef LINKED__LIST_H__
#define LINKED__LIST_H__

#include <stdio.h>
#include <stdlib.h>

typedef int Ldata;

typedef struct _node{
    Ldata data;
    struct _node *next;
}Node;

typedef struct _list{
    Node *head; //point dummy node
    Node *tail;
    Node *curr; // Lfirst, Lnext
    Node *before; // Lremove
    int numofdata;
}Linkedlist;

typedef Linkedlist List;

void ListInit(List *plist);
void LInsert(List *plist, Ldata data);
int LFirst(List *plist, Ldata *data);
int LNext(List *plist, Ldata *data);
Ldata LRemove(List *plist);
int LCount(List *plist);

#endif