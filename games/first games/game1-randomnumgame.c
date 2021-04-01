#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //랜덤 함수를 이용하여 먼저 숫자가 나오는 사람이 이기는 게임.

    srand(time(NULL));

    int a;
    int b;
    int i = 0;

    printf("choose a number.");
    scanf("%d", &a);
    printf("choose a number.");
    scanf("%d", &b);

    while (1)
    {
        i++;

        int t = rand() % 1001;
        printf("%d번째 게임:%d\n", i, t);
        if (a == t)
        {
            printf("Gun won!\n");
            break;
        }
        else if (b == t)
        {
            printf("L won!\n");
            break;
        }

        usleep(2000);
    }
    return 0;
}