#include <stdio.h>

int main(){
    int age[5], scores[5];// makes each array a 5-element integer arrat
    int maxagegrp[5], minagegrp[5];
    int maxage = -1, minage = 1000, maxscore=-1, minscore=1000;
    int maxagecnt=0, minagecnt=0, maxscorecnt=0, minscorecnt=0;
    int maxscoregrp[5], minscoregrp[100];

    for (int i = 0; i<5; i++){
        scanf("%d %d", &age[i], &scores[i]);
        if ((age[i]<=0)||(scores[i]<=0)){
            printf("input the age and score again\n");
            i--;
        }
    }
    for (int i = 0; i<5; i++){
        if (maxage < age[i]){
            maxagecnt = 0;
            maxage = age[i];
            maxagegrp[maxagecnt] = i;
        }
        else if(age[i]==maxage){
            maxagecnt++;
            maxagegrp[maxagecnt] = i;
        }
        if (minage > age[i]){
            minagecnt = 0;
            minage = age[i];
            minagegrp[minagecnt] = i;
        }
        else if(minage==age[i]){ 
            minagecnt++;
            minagegrp[minagecnt] = i;
        }
        if ( maxscore < scores[i] ){
            maxscorecnt = 0;
            maxscore = scores[i];
            maxscoregrp[maxagecnt] = i;
        }
        else if (maxscore == scores[i]){
            maxscorecnt++;
            maxscoregrp[maxagecnt] = i;
        }
        if (minscore > scores[i]){
            minscorecnt = 0;
            minscore = scores[i];
            minscoregrp[minscorecnt] = i;
        }
        else if (minscore == scores[i]){
            minscorecnt++;
            minscoregrp[minscorecnt] = i;
        }
    }
    printf("%d %d %d %d\n", maxagecnt, minagecnt, maxscorecnt, minscorecnt);
    for (int i = 0; i<maxagecnt+1; i++){
        printf("score for an oldest student = %d\n", scores[maxagegrp[i]]);
    }
    for (int i = 0; i<minagecnt+1; i++){
        printf("score for an youngest studnet = %d\n", scores[minagegrp[i]]);
    }
    for (int i = 0; i<maxscorecnt+1; i++){
        printf("age for a student with highest score = %d\n", age[maxscoregrp[i]]);
    }
    for (int i = 0; i<minscorecnt+1; i++){
        printf("age for a student with lowest score = %d\n", age[minscoregrp[i]]);
    }

    return 0;

}