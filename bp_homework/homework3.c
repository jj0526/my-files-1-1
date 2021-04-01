#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;
    int d;
    int e;

    int people;
    float cost;

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

    printf("몇 명과 나누실 겁니까?(자신을 포함하여)\n");
    scanf("%d", &people);
    if (people <= 0)
    {
        printf("다시 입력해 주십시오");
        return 0;
    }
    else
    {
        cost = (((float)a / c * b + d + e) / people);
    }

    printf("your daily cost of driving to work is $%.2f", (float)a / c * b + d + e);
    printf("한 명당 $%.2f입니다.", cost);

    return 0;
}