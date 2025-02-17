// Your code here...
#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    scanf("%d %d", &num, &n);

    // Retrieve the nth bit
    int bit = (num >> n) & 1;

    // Output the value of the nth bit
    printf("%d\n", bit);

    return 0;
}