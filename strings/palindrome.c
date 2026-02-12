/*Example
Input:
bananas
Output: 
5
Explanation:
The longest palindromic substring is 'anana' with a length of 5.

Input format :
The input consists of a string.

Output format :
The output prints the integer, representing the length of the longest palindromic substring.
*/
// You are using GCC
#include<stdio.h>
#include<string.h>
int main(){
    char str[51];
    scanf("%s",str);
    int n,i;
    n=strlen(str);
    int maxlen=1; //one character is always a palindrome
    //i is the possible centre of palindrome
    for(i=0;i<n;i++){
        //odd length palindromes
        int left=i,right=i;
        while(left>=0 && right<n && str[left]==str[right]){
            int len=right-left+1;
            if(len>maxlen){
                maxlen=len;
            }
            left--;
            right++;
        }
        // for even length of palindrome
        left=i;
        right=i+1;
        while(left>=0 && right<n && str[left]==str[right]){
            int len=right-left+1;
            if(len>maxlen){
                maxlen=len;
            }
            left--;
            right++;
        }
        
    }
    printf("%d",maxlen);

}
