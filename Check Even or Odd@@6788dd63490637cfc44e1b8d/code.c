// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d Even\n", num);
    } else {
        printf("%d Odd\n", num);
    }

    return 0;
}
