/*
input money and print change with 10, 5, 2 and 1 coin
*/

#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    // using division
    int c10 = money /10;
    // using modulo
    money = money % 10;
    int c5 = money / 5;
    money = money % 5;
    int c2 = money / 2;
    money = money % 2;
    int c1 = money;
    
    printf("10 = %d\n", c10);
    printf("5 = %d\n", c5);
    printf("2 = %d\n", c2);
    printf("1 = %d\n", c1);
    
    return 0;
}