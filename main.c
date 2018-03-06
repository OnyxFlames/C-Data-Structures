#include <stdio.h>

#include "LinkedList.h"

int main(int argc, char* argv[])
{
    node_t* list = ll_create();

    ll_push_front(&list, 10);
    ll_push_front(&list, 11);
    ll_push_front(&list, 12);

    if (ll_remove_by_value(&list, 11) == 1)
        printf("Found value and removed\n");
    
    free(list);

    return 0;
}