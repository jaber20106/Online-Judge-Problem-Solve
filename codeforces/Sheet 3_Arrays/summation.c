#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        long long num;
        scanf("%lld", &num);
        sum += num;
    }
    if (sum < 0) {
        sum = -sum;
    }
    printf("%lld\n", sum);
    return 0;
}