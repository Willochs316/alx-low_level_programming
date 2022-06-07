#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[8] = "_putchar";
int i;
char new_line = '\n';

for (i = 0; i < 8; i++)
write(1, &word[i], 1);
write(1, &new_line, 1);

return (0);
}
