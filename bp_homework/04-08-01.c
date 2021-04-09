#include <stdio.h>

int main()
{

    int work_hr;
    float money;
    float salary;

    printf("How many hours do you work for a week?");
    scanf("%d", &work_hr);
    printf("How much do you make per hour?");
    scanf("%f", &money);

    if (work_hr > 0 && money > 0)
    {
        if (work_hr <= 40)
        {
            salary = work_hr * money;
        }
        else if (work_hr > 40)
        {
            work_hr = work_hr - 40;
            salary = 40 * money + work_hr * money * 1.5;
        }
        printf("Your salary is $%.2f", salary);
    }
    else
    {
        printf("input the numbers again");
    }
    return 0;
}