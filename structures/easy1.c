/*The first line contains an integer n, representing the number of items.

The next n lines each contain:

A string name representing the item's name.
An integer number representing the item's number (this is not used in the calculation, just for identification).
An integer quantity representing the quantity of the item.
An integer price representing the price of the item
Output format :
For each item, print the name and the total cost (price * quantity), each on a new line.

*/
#include<stdio.h>
#include<string.h>
struct food{
    char item[20];
    int no;
    int quantity;
    int price;
};

int main(){
    int n,i;
    struct food s1[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s1[i].item);
        scanf("%d",&s1[i].no);
        scanf("%d",&s1[i].quantity);
        scanf("%d",&s1[i].price);
    }
    for(i=0;i<n;i++){
        int total=s1[i].quantity*s1[i].price;
        printf("%s %d\n",s1[i].item,total);
    }
    
    
}
