#include <stdio.h>


int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s \n",&name);
    scanf("%d \n",&age);
    scanf("%d \n",&hobby);
    printf("Name: %s \n",name);
    printf("Age: %d \n",age);
    printf("Hobby: %s \n",hobby);
    return 0;
}