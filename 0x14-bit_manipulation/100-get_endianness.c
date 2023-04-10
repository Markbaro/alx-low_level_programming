#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks indianness
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
    int number = 1;
    char *ptr = (char*)&number;

    if (*ptr == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
