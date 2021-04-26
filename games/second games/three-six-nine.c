#include <stdio.h>
#include <time.h>


int main(){

    char name[20];
    unsigned char num[255];        //what the player typed
    unsigned char three[255];      // the answer
    unsigned char score;

    printf("3 6 9 game is starting soon!\n");
    printf("What's your nickname?\n");
    scanf(" %s", name);

    printf("0 for starting first. 1 for starting second.\n");
    scanf("%d", &num[0]);

    for (int i = 0; i<255; i++)
    {
        for (int j = 0; j<2; j++)
        {
            if((j%10 == 3)
        }
        if ((i+1)%3 == 0)
        {
            three[i] = 'c';
        }
        else
        {
            three[i] = i+1;
        }
    }
    for (int i = 0; i<255; i++)
    {
        if ((i-1)%2 == 0)
        {
            num[i] = three[i];
        }
    }

    int i = 0;

    if (num[0] == 0)
    {
        printf("You're starting first!\n");    //user first

        num[i] = 1;
        
        while(1)
        {
            scanf("%d", &num[i]);

            if (num[i]!=three[i])
            {
                printf("you lost");
                break;
            }
            else if (num[i]==255)
            {
                printf("you won!");
                break;
            }

            i++;

            sleep(200000);
            printf("%d", num[i]);

            i++;
            score = i;
        }
    }
    else if (num[0] == 1)
    {
        //computer first
    }
    else
    {
        printf("Try again");
    }
    printf("you've tried %d times!", score);

    return 0;

}