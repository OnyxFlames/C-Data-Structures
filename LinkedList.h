#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;

} node_t;

node_t* ll_create();
void ll_push(node_t* head, int value);
void ll_print(node_t* lst);

#endif