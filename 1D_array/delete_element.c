// The first line consists of an integer n, the size of the array.
// The second line consists of n space-separated integers, representing the elements of the array.
//After removing the element at the 3rd position, the output displays space-separated integer array values.

// You are using GCC
#include<stdio.h>
int main(){
    int i,n;
    int d=2;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=d;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }

}
