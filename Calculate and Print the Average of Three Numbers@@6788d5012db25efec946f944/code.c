#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double n1,n2,n3,avg;
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    avg=(n1+n2+n3)/2;
    printf("Average: %.2lf",avg);

}