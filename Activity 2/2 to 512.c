#include <stdio.h>

int main() {
    int i, power = 1;
    
    for(i = 0; power <= 512; i++) {
        printf("2^%d = %d\n", i, power);
        power *= 2;
    }
    
    return 0;
}
