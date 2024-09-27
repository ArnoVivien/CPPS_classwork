#include<stdio.h>
#include<string.h>
main(){
    char fname[30], lname[30];
    printf("Enter the fname : ");
    scanf("%s",fname);
    printf("The name before strcpy() : %s \n",fname);
    strcpy(lname,fname);
    printf("The name of after strcpy() : %s",lname);
}