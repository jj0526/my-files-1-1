#include <stdio.h>

int main(){
    int num1 = 10;
    printf("%d", num1);

    changeNum(num1);

    printf("%d", num1);

}

void changeNum(int num1){
    num1 = num1 + 10;
}