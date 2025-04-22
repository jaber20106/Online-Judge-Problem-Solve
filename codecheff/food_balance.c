#include <stdio.h>
#include <stdlib.h>  // Required for abs()

int main() {
    int f1, p1, f2, p2;
    scanf("%d%d%d%d", &f1, &p1, &f2, &p2);

    int a = abs(f1 - p1);
    int b = abs(f2 - p2);

    if (a < b) {
        printf("First\n");
    }
    else if (a > b) {
        printf("Second\n");
    }
    else {
        printf("Both\n");
    }

    return 0;
}
