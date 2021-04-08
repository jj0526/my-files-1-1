#include <stdio.h>
#include <math.h>

int main(){
    
    int num_nine = 0;
    int num;
    
    printf("number?");
    scanf("%d", &num);

    for (int i = 0; i<4; i++)
    {
        if (num / pow(10,4-i) == 9)
        {
            num_nine++;
            num = num - (num / pow(10,4-i));
        }
        else
        {
            num = num % (int)(pow(10,4-i));
        }
    }
    
    printf("%d",num_nine);
    
    return 0;
}