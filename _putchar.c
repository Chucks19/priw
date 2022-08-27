#include <unistd.h>

// _putchar - return char to stdout

int _putchar(char c)
{
return (write(1, &c, 1));
}
