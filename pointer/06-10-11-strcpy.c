#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "abcdefg";
    printf("%s", strchr(str, 'c'));
}