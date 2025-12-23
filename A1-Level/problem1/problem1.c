#include <stdio.h>

int main() {
    char name[100], surname[100];
    scanf("%s %s", &name, &surname);
    printf("%s %s\n", name, surname);
    printf("%c%c%c%c", name[0],name[1],surname[0],surname[1]);
    return 0;  
}