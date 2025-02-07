#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char[50] name;
    int age;
    char[50] hobby;
    scanf("%s %d %s",&name,%age,&hobby);
    printf("Name: %s \n",name);
    printf("Age: %d \n",age);
    printf("Hobby: %s",hobby);
    return 0;
}