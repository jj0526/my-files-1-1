#include <stdio.h>
#include <math.h>

int main()
{

    int num_nine = 0;
    int num;

    printf("number?\n");
    scanf("%d", &num);

    if (0 < num && num < 100000)
    {

        for (int i = 0; i < 5; i++)
        {
            if (num % 10 == 9)
            {
                num_nine++;
                num = num / 10;
            }
            else
            {
                num = num / 10;
            }
        }
        printf("%d", num_nine);
    }
    else if (-100000 < num && num < 0)
    {
        num = num + 99999;
        for (int i = 0; i < 5; i++)
        {
            if (num % 10 == 0)
            {
                num_nine++;
                num = num / 10;
            }
            else
            {
                num = num / 10;
            }
        }
        printf("%d", num_nine);
    }
    else if (num == 0)
    {
        printf("%d", num_nine);
    }
    else
    {
        printf("Type the number again.");
    }

    return 0;
}