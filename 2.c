#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%i%i", &n, &m);
    for (int i = n + 1 ; m > i ; i++)
    {
        printf("%i\n", i);
    }
    printf("%i\n", (m - n - 1));
}