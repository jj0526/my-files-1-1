#include <stdio.h>
#include <math.h>

int main()
{

    int num[10];

    int dig;
    int length;
    int count = 0;

    printf("type a number\n");
    scanf("%d", &dig);

    if (10000 <= dig && dig <= 99999)
    {
        length = 5;
    }
    else if (1000 <= dig && dig <= 9999)
    {
        length = 4;
    }
    else if (100 <= dig && dig <= 999)
    {
        length = 3;
    }
    else if (10 <= dig && dig <= 99)
    {
        length = 2;
    }
    else
    {
        printf("type again");
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        num[i] = dig % 10;
        dig = dig / 10;

        /*
        num[i] = dig / pow(10, length - i - 1);
        dig = dig - num[i] * pow(10, length - i - 1);
        */
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (num[i] == num[length - i - 1])
        {
            count++;
        }
        else
        {
            printf("It's not palindrome.");
            return 0;
        }
    }
    
    if (count == length / 2)
    {
        printf("It's palindrome");
    }
    
    return 0;
}