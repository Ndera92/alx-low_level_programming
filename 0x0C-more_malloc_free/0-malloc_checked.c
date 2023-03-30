<<<<<<< HEAD
#include <stdlib.h> 
=======
#include <stdlib.h>
>>>>>>> d2fcb65a9e0d453ae0744f47d5314ac6d8441845
#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocates
*
* Return: a pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
<<<<<<< HEAD

=======
>>>>>>> d2fcb65a9e0d453ae0744f47d5314ac6d8441845
