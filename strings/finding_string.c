/* The first line contains an integer n, the number of strings in the array.

The second line contains n strings, representing the elements of the array, separated by a space.

The last line contains a string s, which Akash wants to search for.

Output format :
If s is found in the array, output "Found in row: x", where x is the row number where the string is found (1-indexed).

If s is not found in any row, output "Not found".
*/
// You are using GCC
#include<stdio.h>
#include<string.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr[10][101];
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    char s[101];
    scanf("%s",s);
    int found=0;
    for(i=0;i<n;i++){
        if(strcmp(arr[i],s)==0){
            printf("Found in row: %d",i+1);
            found=1;
            break;
        }
        
    }
    if(!found){
        printf("Not found");
    }
}
