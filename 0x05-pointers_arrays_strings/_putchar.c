#include <unistd.h>
#include "main.h"

int _putchar(char k)
{
	return (write(1, &k, 1));
}
