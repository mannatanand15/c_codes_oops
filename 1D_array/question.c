//Input Format The first line of input consists of an integer N, representing the size of the array.
//The second line consists of N space-separated integers, representing the elements of the array. 
//Output Format The output displays the modified array after moving all zeroes to the end

#include<stdio.h>
int main(){
    int n,i;
    int pos=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //print the nonzero elements in first places
    for(i=0;i<n;i++){
        if(arr[i] !=0){
            arr[pos]=arr[i];
            pos++;
        }
    }
    //for all remaining zero elements
    while(pos<n){
        arr[pos]=0;
        pos++;
    }
  //finally printing the array
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
