#include<stdio.h>
int main(){
    int n,i;
    int isprime=0;
    scanf("%d",&n);
    if(n<=1){
        isprime=1;
    }
    //we cannot define the range by other number like 100
    //for the case of prime numbers we use n/2
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=1;
        }
    }
    if(isprime==0){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
}
