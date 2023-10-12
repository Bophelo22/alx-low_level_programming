#include "function_pointers.h"
#include "_putchar.c"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array to be iterated
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i, size_ptr;
    void (*action_ptr)(int);
    i = 0;
    size_ptr = size;
    action_ptr = action;
    if ((array != NULL) && (action_ptr != NULL))
    {
        for (; i < size_ptr; i++)
        {
            action_ptr(array[i]);
        }
    }
    else
    {
        return;
    }
}
