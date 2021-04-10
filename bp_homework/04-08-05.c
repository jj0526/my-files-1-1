#include <stdio.h>

int main()
{
    float N;
    int P;

    printf("N^P\n");
    printf("input a N (float)\n");
    scanf("%f", &N);
    printf("input a P (integer)\n");
    scanf("%d", &P);
    float h = N;

    if (N == 0 && P == 0)
    {
        printf("type the number again.");
    }
    else if (N != 0 && P == 0)
    {
        N = 1;
        printf("%f", N);
    }
    else if (P != 0)
    {
        for (int i = 0; i < P - 1; i++)
        {
            N = N * h;
        }
        printf("%.5f", N);
    }

    return 0;
}