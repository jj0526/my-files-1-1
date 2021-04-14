#include <stdio.h>

int main()
{
    float wage;
    int time;
    float salary;

    salary = 1;
    wage = 1;

    while (1)
    {
        printf("how long do u work\n");
        scanf("%d", &time);
        printf("how much do you make\n");
        scanf("%f", &wage);

        if ((time <= 0) || (wage <= 0))
        {
            printf("type again");
            break;
        }
        else
        {

            if (time <= 40)
            {
                salary = wage * time;
            }
            else if (time > 40)
            {
                salary = 40 * wage;
                time = time - 40;
                salary = salary + 1.5 * time * wage;
            }
            printf("%.2f\n", salary);
        }
    }
    return 0;
}