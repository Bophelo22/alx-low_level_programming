#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
 unsigned int i;
char *pointr;
char *oldPointr;
i = 0;
if(ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
pointr = malloc(new_size);
if (pointr == NULL)
{
return (NULL);
}
oldPointr = ptr;
if (new_size > old_size)
{
for (; i < new_size; i++)
{
pointr[i] = oldPointr[i];
}
}
else if (new_size < old_size)
{
for (; i < new_size; i++)
{
pointr[i] = oldPointr[i];
}
}
free(ptr);
return (pointr);
}
