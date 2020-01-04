#include <stdio.h>

int fatorial (int number)
{   
    int count;
    
    if (number > 0) 
    {
        count++;
        return fatorial(number -1) + number; 
    }
    return 0;
}

int main () 
{
    int result = fatorial(5);
    printf("%d ", result);

    return 0;
}