#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element for which the
 * cmp function does not return 0, If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i, index;
    int (*cmp_ptr)(int);
    i = 0;
    cmp_ptr = cmp;

    if ((array != NULL) && (cmp_ptr != NULL))
    {
        for (; i < size; i++)
        {
            if (cmp_ptr(array[i]) != 0)
            {
                index = i;
                return (index);
            }
        }
    }
    else if (size <= 0)
    {
        return (-1);
    }
    else
    {
        return (-1);
    }
    return (-1);
}
