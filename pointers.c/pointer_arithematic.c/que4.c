//  Sum of AP = (n * (2 * a1 + (n - 1) * d)) / 2.
// You are using GCC
#include<stdio.h>
int main(){
    int a1,d,n;
    int ans;
    int *p,*q,*r;
    scanf("%d",&a1);
    scanf("%d",&d);
    scanf("%d",&n);
    p=&a1;
    q=&d;
    r=&n;
    ans=(*r *(2*(*p)+((*r-1)*(*q))))/2;
    printf("%d",ans);
    
}
