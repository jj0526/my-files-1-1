#include <stdio.h>

int main()
{

    int num;
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("input the number.");
    scanf("%d", &num);

    if (10000 <= num && num < 100000)
    {
        a = num / 10000;
        num = num - a * 10000;
        b = num / 1000;
        num = num - b * 1000;
        c = num / 100;
        num = num - c * 100;
        d = num / 10;
        num = num - d * 10;
        e = num;
    }
    else
    {
        printf("type the number again in range of 10000 to 99999.");

        return 0;
    }
    printf("%d   %d   %d   %d   %d", a, b, c, d, e);

    return 0;
}