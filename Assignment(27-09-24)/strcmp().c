#include<stdio.h>
main(){
    char str1[30], str2[30];
    int x;
    printf("Enter the first string :");
    scanf("%s",str1);
    printf("Enter the second string :");
    scanf("%s",str2);

    x = strcmp(str1,str2);
    if (x == 0){
       printf("The strings are equal!"); 
    }
    else{
        printf("The strings are not equal");
    }
}
