#include <stdio.h>

int main(){

    int sec;
    int hr;
    int min;
    int s;

    printf("input the total time elapsed in seconds");

    scanf("%d",&sec);
    if (sec>=0)
    {
        hr = sec / 3600;
        sec= sec - 3600 * hr;
        min = sec / 60;
        sec = sec - 60 * min;
        printf("%d:%d:%d",hr,min,sec);
    }
    else
    {
        printf("type the num again");
    }
    return 0;
}