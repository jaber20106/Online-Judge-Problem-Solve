#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int remainder = a % b;

        if (remainder == 0) {
            printf("0\n");
        } else {
            printf("%d\n", b - remainder); 
        }
    }

    return 0;
}
