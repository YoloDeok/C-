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
    Node *curr; // Lfirst, Lnext
    Node *before; // Lremove
    int numofdata;
    int (*comp)(Ldata d1, Ldata d2); // function pointer for sort function
}Linkedlist;

typedef Linkedlist List;

void ListInit(List *plist);
void LInsert(List *plist, Ldata data); // change for sort function
void FInsert(List *plist, Ldata data); // add for sort function
void SInsert(List *plist, Ldata data); // add for sort function
int LFirst(List *plist, Ldata *data);
int LNext(List *plist, Ldata *data);
Ldata LRemove(List *plist);
int LCount(List *plist);

void SetSortRule(List * plist, int (*comp)(Ldata d1, Ldata d2)); //to determine the sort rule when inputting data

#endif