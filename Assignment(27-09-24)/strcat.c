#include<stdio.h>
main(){
    char fname[30], lname[30];
    printf("Enter the first name : ");
    scanf("%s",fname);
    printf("Enter the last name : ");
    scanf("%s",lname);
    strcat(fname,lname);
    printf("After strcat() : %s",fname);
}