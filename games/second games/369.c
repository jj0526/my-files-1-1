#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){

    int player[1000];
    int first;
    int dig;
    int dig_count;
    int temp;
    int num_c = 0;
    char first_c[1000];
    char second_c[1000];
    char third_c[1000];
    int score;
    int jari[100];
    int the_num;

    printf("0 for starting first. 1 for starting second\n");

    scanf("%d",&first);

    int i = 0;
    int count = 0;

    if (first == 0)
    {
        printf("you're starting first!\n");
        while (1)
        {
            num_c = 0;

            dig_count = 0;

            the_num = i+1;

            for ( int j = 0 ; j<3; j++)
            {
                the_num = the_num / 10;
                if ( temp > 0 )
                {
                    dig_count++;
                }
            }
            the_num = i+1;
            for (int j = 0; j<dig_count+1; j++)
            {
                jari[j] = the_num%10;
                the_num = the_num/10;
                if (jari[j]%3==0)
                {
                    num_c++;
                }
            }
            if (num_c == 0)
            {
                scanf("%d", player[i]);
                if (player[i]==i+1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if(num_c == 1)
            {
                scanf(" %c",&first_c[i]);
                if (first_c[i] == 'c')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (num_c == 2)
            {
                scanf(" %c%c",&first_c[i],&second_c[i]);
                if ((first_c[i]=='c')&&(second_c[i]=='c'))
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            else if (num_c == 3)
            {
                scanf(" %c%c%c",&first_c[i],&second_c[i],&third_c[i]);
                if ((first_c[i]=='c')&&(second_c[i]=='c')&&(third_c[i]=='c'))
                {
                    continue;
                }
                else
                {
                    break;
                }

            }
            for (int j = 0; j<3; j++)
            {
                jari[j]=NULL;
            }

            num_c = 0;

            dig_count = 0;
            
            i++;
            the_num = i+1;
            for ( int j = 0 ; j<3; j++)
            {
                the_num = the_num / 10;
                if ( temp > 0 )
                {
                    dig_count++;
                }
            }
            for (int j = 0; j<dig_count; j++)
            {
                jari[j] = the_num%10;
                the_num = the_num/10;
                if (jari[j]%3==0)
                {
                    num_c++;
                }
            }
            if (num_c == 0)
            {
                printf("%d",i+1);
            }
            else{

                for (int j = 0; j<num_c; j++)
                {
                    printf("c");
                }
            }
            i++;
        }
    }

}