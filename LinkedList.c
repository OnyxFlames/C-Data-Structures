#include "LinkedList.h"

node_t* ll_create()
{
    node_t* ret = malloc(sizeof(node_t));
    ret->next = NULL;
    ret->data = 0;
    return ret;
}

void ll_push_back(node_t* head, int value)
{
    node_t* curr = head;

    while(curr->next != NULL)
        curr = curr->next;

    curr->next = malloc(sizeof(node_t));
    curr->next->data = value;
    curr->next->next = NULL;
}

void ll_push_front(node_t** head, int value)
{
    node_t* new_node;
    new_node = malloc(sizeof(node_t));

    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

int ll_pop_front(node_t** head)
{
    int retval = -1;
    node_t* next_node = NULL;

    if(*head == NULL)
        return -1;
    next_node = (*head)->next;
    retval = (*head)->data;
    free(*head);
    *head = next_node;

    return retval;
}

int ll_pop_last(node_t* head)
{
    int retval = 0;

    if(head->next == NULL)
    {
        retval = head->data;
        free(head);
        return retval;
    }
    node_t* current = head;
    while(current->next->next != NULL)
        current = current->next;

    retval = current->next->data;
    free(current->next);
    current->next = NULL;
    return retval;
}

int ll_remove_by_index(node_t** head, int index)
{
    int i = 0;
    int retval = -1;
    node_t* current = *head;
    node_t* temp_node = NULL;

    if(index == 0)
        return ll_pop_front(head);
    for(i = 0; i < index - 1; i++)
    {
        if(current->next == NULL)
            return -1;
        current = current->next;
    }

    // Get the value of the temp node, set current->next to temp_nodes next, then free tempnode.
    temp_node = current->next;
    retval = temp_node->data;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}
// ugh
int ll_remove_by_value(node_t** head, int value)
{
    int found = 0;
    node_t* current = *head;
    node_t* temp_node = NULL;

    while (current->next != NULL)
    {
        if (current->data == value)
        {
            temp_node = current;
            current->next = temp_node->next;
            found = 1;
        }
        else
            current = current->next;
    }

    if (temp_node != NULL)
    {
        free(temp_node);
        temp_node->next = NULL;
    }
    return found;
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
