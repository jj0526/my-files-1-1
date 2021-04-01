#include <stdio.h>

int main()
{

    int sec;
    int hr;
    int min;
    int s;

    printf("input the total time elapsed in seconds\n");

    scanf("%d", &sec);
    if (sec >= 0)
    {
        s = sec % 60;
        sec = sec - s;
        min = sec % 3600 / 60;
        hr = (sec - min * 60)/3600;

    }
    else
    {
        printf("type the seconds again");

        return 0;
    }

    printf("%d:%d:%d", hr, min, s);

    return 0;
}