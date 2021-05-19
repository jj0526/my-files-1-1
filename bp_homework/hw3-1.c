#include <stdio.h>

int main(){

    printf("Input a word 1\n");
    char word1[100];
    scanf("%s", word1);


    printf("Input a word 2\n");
    char word2[100];
    scanf("%s", word2);

    int answer = anagram(word1, 100, word2);
    if (answer == 1){
        printf("It's a anagram.");
    }
    else{
        printf("It's not a anagram");
    }

    return 0;
}

int anagram(char *word1, int size, char *word2){

    for (int i = 0; i<strlen(word1); i++){
        word1[i] = toupper(word1[i]);
    }

    for (int i = 0; i<strlen(word2); i++){
        word2[i] = toupper(word2[i]);
    }

    int ascii1[50];

    for (int i =0; i<50; i++){
        ascii1[i] = 0;
    }
    int ascii2[50];
    for (int i = 0; i<50; i++){
        ascii2[i] = 0;
    }

    for (int i = 0; i<strlen(word1); i++){
        for (int j = 0; j<26; j++){
            if((int)word1[i] == 65+j)
            {
                ascii1[j]++;
            }
        }
    }
    for (int i = 0; i<strlen(word2); i++){
        for (int j = 0; j<26; j++){
            if((int)word2[i] == 65+j)
            {
                ascii2[j]++;
            }
        }
    }

    int count=0;
    for (int i = 0; i<26; i++){
        if (ascii1[i] == ascii2[i]){
            count++;
        }
    }
    if (count == 26){
        return 1;
    }
    else{
        return 0;
    }
}