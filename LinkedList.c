#include "LinkedList.h"

node_t* ll_create()
{
    node_t* ret = malloc(sizeof(node_t));
    ret->next = NULL;
    ret->data = 0;
    return ret;
}

void ll_push(node_t* head, int value)
{
    node_t* curr = head;

    while(curr->next != NULL)
        curr = curr->next;

    curr->next = malloc(sizeof(node_t));
    curr->next->data = value;
    curr->next->next = NULL;
}

void ll_print(node_t* lst)
{
    node_t* curr = lst;
    while(curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}
