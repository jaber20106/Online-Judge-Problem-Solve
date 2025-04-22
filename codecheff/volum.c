#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);
        printf("%d\n", abs(X - Y));
    }

    return 0;
}
