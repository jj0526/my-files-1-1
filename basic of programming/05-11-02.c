#include <stdio.h>

int main(){
    char str[];

    gets(str);
    int i = 0;
    while (str[i]!='\0')
    {
        if ((str[i]>=65)&&(str[i]<=90)){
            str[i] = str[i] + 32;
        }
    }
    puts(str);

}