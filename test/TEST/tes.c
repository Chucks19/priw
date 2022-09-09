#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int b4an, can;
    char *g;
    g = "ok yes";
    
    _printf("pls input integer valve for b4an and can");

    scanf("%d %i", &b4an, &can);
    _printf("we are printing: decimal %d, integer:%i, char: %c, string %s", b4an, can,'b', g);

    return (0);
}
