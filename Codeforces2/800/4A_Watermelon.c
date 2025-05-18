#include <stdio.h>
 
int main() {
    int w;
    scanf("%d", &w);
 
    // Check the conditions for dividing the watermelon
    if (w > 2 && w % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}