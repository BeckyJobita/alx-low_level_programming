#include <stdio.h>
/**
 *main -prints alphabets in order
 *Return: Always (0) Successful
 */
int main(void)
{
int ltr;
for (ltr = 'a'; ltr <= 'z'; ltr++)
putchar(ltr);
for (ltr = 'A'; ltr <= 'Z'; ltr++)
putchar(ltr);
putchar('\n');
return (0);
}
