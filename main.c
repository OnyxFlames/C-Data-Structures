#include <stdio.h>

#include "LinkedList.h"

int main(int argc, char* argv[])
{
    node_t* list = ll_create();
    
    free(list);

    return 0;
}