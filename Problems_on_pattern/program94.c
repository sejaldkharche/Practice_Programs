//patern printing
// input:7
// output:# # # # # # #

// input:3
// output:# # #

#include<stdio.h>
void Display(int iNo){
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("#\t");
    }
}


int main(){
    int iFrequency=0;
    printf("Enter the frequency of symbol:\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);

return 0;
}