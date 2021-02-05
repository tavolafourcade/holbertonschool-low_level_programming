#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Print all single digit numbers of base 10
 *Description: prints digits from 0 to 9 in base 10. Don't use  `char`
 *Return: 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '9' ; i++)
putchar(i);
putchar('\n');
return (0);
}
