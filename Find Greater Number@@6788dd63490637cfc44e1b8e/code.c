// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Finding the greater number
    if (num1 > num2) {
        printf("%d", num1);
    } else if (num2 > num1) {
        printf("%d", num2);
     } else {
         printf("%d",num1);
     }

    return 0;
}
