#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int e;

    printf("What's the total miles driven per day?");
    scanf("%d", &a);

    printf("What's the cost per gallon of gasoline?");
    scanf("%d", &b);

    printf("What's the average miles per gallon?");
    scanf("%d", &c);
    
    printf("What's the parking fees per day?");
    scanf("%d", &d);

    printf("How many tolls per day?");
    scanf("%d", &e);

    printf("your daily cost of driving to work is $%d",a/c*b+d+e);
}