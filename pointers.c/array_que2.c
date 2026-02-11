*/ Input format :
The first line of input consists of an integer N, representing the number of products in the warehouse.

The second line consists of N space-separated integers, representing the quantity of products.

The third line consists of two space-separated integers, representing the lower limit and upper limit (range).

Output format :
The output prints the number of products falling within the specified range (both inclusive) of quantities.
/*
// You are using GCC
#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    int count=0;
    //
    int *ptr=arr;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        //scanf("%d",arr[i]);
        scanf("%d",(ptr+i));
    }
    int p,q;
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++){
        if(*(ptr+i)>=p && *(ptr+i)<=q){
            count=count+1;
        }
        //if(arr[i] >=p || arr[i]<=q){
    }
    printf("%d",count);
}
