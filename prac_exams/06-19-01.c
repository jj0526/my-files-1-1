#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "abcde";
    char str1[10];
    strcpy(str1, str);
    printf("%s", str1);
    strchr(str,'b');
    printf("%s", strchr(str,'b'));
}