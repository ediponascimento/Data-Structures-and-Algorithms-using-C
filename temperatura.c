#include <stdio.h>

int main(void) 
{

    int tamanhoVetor = 4;
    double averageTemp[tamanhoVetor];

    averageTemp[0] = 31.9;
    averageTemp[1] = 35.3;
    averageTemp[2] = 42.4;
    averageTemp[3] = 42.4; 
    averageTemp[4] = 60.8;

    printf("%d ", averageTemp[0]);
    
    return 0;
}