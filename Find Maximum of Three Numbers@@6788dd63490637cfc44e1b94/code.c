// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a; // Assume 'a' is the maximum

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("%d\n", max);
    return 0;
}
