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
void ll_push_back(node_t* head, int value);
void ll_push_front(node_t** head, int value);
int ll_pop_front(node_t** head);
int ll_pop_last(node_t* head);
int ll_remove_by_index(node_t** head, int index);
int ll_remove_by_value(node_t** head, int value);
void ll_print(node_t* lst);

#endif