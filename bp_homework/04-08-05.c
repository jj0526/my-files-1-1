#include <stdio.h>

int main(){
    float N;
    int P;

    printf("type the N\n");
    scanf("%f",&N);
    printf("input the P\n");
    scanf("%d", &P);
    int h = N;

    for (int i = 0; i<P-1; i++)
    {
        N = N * h;
    }
    printf("%f",N);
}