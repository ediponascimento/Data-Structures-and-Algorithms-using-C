#include <stdio.h>

int x = 0;
int fatorial(int number)
{
    if (number > 0)
    {
        x++;
        return fatorial(number - 1) + x;
    }
    return 0;
}

int main (void)
{

    int result;
    result = fatorial(5);
    printf("%d ", result);

    result = fatorial(5);
    printf("%d ", result);

    return 0;
}