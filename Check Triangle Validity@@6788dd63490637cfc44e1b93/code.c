// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Triangle validity condition
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
