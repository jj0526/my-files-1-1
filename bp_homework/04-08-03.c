#include <stdio.h>

int main(){

    int num[10];
    int digit;
    int count = 0;

    printf("input a five-digit integer\n");
    scanf("%d",&digit);

    if (9999<digit && digit<100000)
    {
        for (int i = 0; i<5; i++)
        {
            num[i] = digit % 10;
            digit = digit / 10;
        }
        for (int i = 0; i<2; i++)
        {
            if (num[i] == num[4-i])
            {
            count++;
            }
        }
        if (count == 2)
        {
            printf("It's a palindrome");
        }
        else
        {
            printf("It's not a palindrome");
        }
    }
    else
    {
        printf("input the number again");
    }

    return 0;

}