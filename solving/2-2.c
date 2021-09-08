#include <stdio.h>
int character_count(char string[], int size);

int main(){
    char string[100];
    int size = 100;

    gets(string);

    int char_cnt = character_count(string, size);

    printf("%d", char_cnt);

}

int character_count(char string[], int size){
    int cnt= 0;
    while(string[cnt]!='\0'){
        cnt++;
    }

    return cnt;

}