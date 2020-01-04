#include <stdio.h>

int main (void) 
{
    int sizeVetor = 5;
    int vetor[sizeVetor];

    vetor[0] = 45;
    vetor[1] = 44;
    vetor[2] = 25;
    vetor[3] = 35;
    vetor[4] = 48;

    int count;
    for (count = 0; count < sizeVetor; count++)
    {
        printf("%d ", vetor[count]);
    }   

    int lastOnVetor = (sizeof(vetor[sizeVetor] - 1));

    return 0;
}