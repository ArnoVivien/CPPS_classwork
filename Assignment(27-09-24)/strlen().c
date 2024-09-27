#include<stdio.h>
main(){
    int x;
    char fname[30];
    printf("Enter the first name : ");
    scanf("%s",fname);
    x = strlen(fname);
    printf("The length of the entered string is : %d ",x);
}
