#include <stdio.h>

int main(){
    int num1,num2,num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int real = find_max(num1, num2, num3);

    printf("%d", real);
}

int find_max(int num1, int num2, int num3){

    int max;

    max = num1;

    if (num2>max)
    {
        max = num2;
    }
    if (num3>max){
        max = num3;
    }
    return max;
}