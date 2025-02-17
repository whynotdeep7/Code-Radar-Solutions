// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Perform one's complement operation
    int result = ~num;

    // Output the result
    printf("%d\n", result);

    return 0;
}