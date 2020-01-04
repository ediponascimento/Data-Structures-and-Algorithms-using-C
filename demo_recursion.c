#include <stdio.h>

int fatorial(int fat) {
    
    if (fat > 0) {
        return fatorial(fat - 1) + fat;
    }
    return 0;

}

int main() {

    int result;
    result = fatorial(5);
    printf("%d ", result);

    return 0;
}
