#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int l = EOF;

    while ((c = getchar()) != EOF)
    {
        if (isdigit(c) && isalpha(l))
        {
            for (int i = 0; i < c-'0'; ++i)
            {
                putchar(l);
            }
        }
        l = c;
    }

    putchar('\n');
    return 0;
}
