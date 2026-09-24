#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            continue;
        }
        printf("Numero Azarado: %d\n", i);
    }
    return 0;
}