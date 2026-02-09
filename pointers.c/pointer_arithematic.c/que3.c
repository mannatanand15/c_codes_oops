/* TO FIND THE MAXIMUM AND MINIMUM IN AN ARRAY
The first line consists of an integer n, representing the number of elements in the array.
The second line consists of n integers representing the temperature values.

Output format :
The first line displays "Highest temperatures: " followed by the highest temperature.
The second line displays "Lowest temperatures: " followed by the lowest temperature.
*/ 
// You are using GCC
#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    
    int *ptr=arr;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
        //scanf("%d",&arr[i]);
    }
    //FOR FINDING MAXIMUM
    int max=*ptr;
    int min=*ptr;
    // int max=arr[0];
    // int min=arr[0];
    for(i=0;i<n;i++){
        if(max<*(ptr+i)){
        //if(max<arr[i]){
            //max==arr[i] THIS IS AN COMPARISON OPERATOR NOT ASSIGNMENT
           // max=arr[i];
           max=*(ptr+i);
        }
        if(min>*(ptr+i)){
        //if(min>arr[i]){
            //min=arr[i];
            min=*(ptr+i);
        }
    }
    
    printf("Highest temperatures: %d\n",max);
    printf("Lowest temperatures: %d",min);
}

/* QUESTION-2
    Input format :
The first line contains an integer n, representing the number of elements in the list.

The second line contains n integers separated by spaces, representing the elements in the list.

Output format :
The output prints a single integer representing the maximum absolute difference between any two elements in the list.
*/
// You are using GCC
#include<stdio.h>
int main(){
    int n,i;
    int arr[100]; 
    
    int *ptr=arr;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
        // scanf("%d",&arr[i]);
    }
    int max=*ptr;
    int min=*ptr;
    // int max=arr[0];
    // int min=arr[0];
    for(i=0;i<n;i++){
        if(max<*(ptr+i)){
            max=*(ptr+i);
        //if(max<arr[i]){
            //max=arr[i];
        }
        if(min>*(ptr+i)){
            min=*(ptr+i);
        //if(min>arr[i]){
           // min=arr[i];
        }
    }
    int diff=0;
    diff=max-min;
    printf("%d",diff);
}
