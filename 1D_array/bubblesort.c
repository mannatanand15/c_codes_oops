// If the numbers are not the same, the output displays "Arranged elements are: " followed by the input array sorted array in ascending order separated by space.
// If the numbers are the same, the output displays "All elements are the same".

// You are using GCC
#include<stdio.h>
int main(){
    int i,j,temp;
    int same=1; //same ki value initialise krni hogi
    int arr[10];
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
//check if all elements are same or not
    for(i=0;i<10;i++){
        if(arr[0]!=arr[i]){
            same=0;
            break;
        }
    }
//to print the same wala condition
    if(same==1){
        printf("All elements are the same");
    }
    else{
        for(i=0;i<9;i++){
            for(j=0;j<9-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    
                }
            }
        }
        printf("Arranged elements are:");
        for(i=0;i<10;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
