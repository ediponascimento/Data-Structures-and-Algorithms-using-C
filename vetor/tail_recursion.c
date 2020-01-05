#include <stdio.h>

void fatorial(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fatorial(n - 1);
        fatorial(n - 1);
    }
}

int main()
{
    fatorial(3);
    return 0;
}
