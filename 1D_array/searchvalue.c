//If the code is present, print:
//"The number <searchvalue> is present in the array"
//If the code is not present, print:
//"The number <searchvalue> is not present in the array"

#include<stdio.h>
int main(){
    int n,i,target;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]); //taking the input in array
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(arr[i]==target){
            printf("The number %d is present in the array",target);
            //TO PRINT THE INTEGER IN MIDDLE WE WILL HAVE TO SPECIFY IN END WHICH INTEGER IS SPECIFIED
            return 0; //this will terminate the code as soon as we find the target
        }
    }
    //EXECUTES ONLY WHEN THE NUMBER IS NOT FOUND 
    
    printf("The number %d is not present in the array",target);
        
    
}
