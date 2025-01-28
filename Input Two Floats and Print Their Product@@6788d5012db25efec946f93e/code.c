#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,res;
    scanf("%f %f \n",&a,&b);
    res=a*b;
    printf("Product: %.2f \n",res);
    return 0;

}