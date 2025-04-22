#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n_a, n_b, n_c;
        scanf("%d %d %d", &n_a, &n_b, &n_c);

        if (n_a > (n_b + n_c) || n_b > (n_a + n_c) || n_c > (n_a + n_b)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
