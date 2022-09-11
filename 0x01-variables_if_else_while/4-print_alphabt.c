#include <stdio.h>
/**
* main- prints alphabets in lowercase 
* with exception to q and e
* Return: should return zero
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;						
}
putchar(ch);
}
putchar('\in');
return (0);
}
