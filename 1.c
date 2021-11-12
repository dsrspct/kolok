#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%i", &n);
    for (int i = 1; n > i ; i++)
    {
        if (i * i > n)
        {
            printf("%i\n", i);
            break;
        }
    }
}