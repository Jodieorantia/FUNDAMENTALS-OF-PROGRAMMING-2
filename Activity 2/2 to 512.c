#include <stdio.h>

int main() {
    int i, power = 2;
    
    for(i = 1; power <= 512; i++) {
        printf("2^%d = %d\n", i, power);
        power *= 2;
    }
    
    return 0;
}

