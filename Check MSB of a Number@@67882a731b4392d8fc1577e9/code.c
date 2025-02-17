// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check if the LSB is set
    if (num & (1<<31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}