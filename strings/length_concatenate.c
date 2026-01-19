#include<stdio.h>

int main(){
    char str1[26];
    char str2[26];
    char str[51]; //was asked to include 50 characters
    scanf("%s",str);   //take input of string
    printf("%d",strlen(str));   //inbuilt function to find length
    
    scanf("%s",&str1);
    scanf("%s",&str2);
    strcat(str1,str2);  //concatenate second string in first
    printf("%s",str1);  //printing first string
    
    
    
}
