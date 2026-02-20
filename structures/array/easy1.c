/*Each of the following n lines contains six space-separated values:

<BookID> <BookName> <AuthorName> <PublisherName> <NumberOfCopies> <Price>

Output format :
Print n lines.
Each line contains two space-separated values:
<BookName> <FinalPrice>
where <FinalPrice> is the price after adding the applicable tax, rounded to two decimal places.
  */
// You are using GCC
#include<stdio.h>
#include<string.h>
struct book{
    int id;
    char name[50];
    char author[25];
    char pubname[25];
    int number;
    float price;
};
int main(){
    int i,n;
    float finalprice;
    struct book s1[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %s %s %d %f",&s1[i].id,s1[i].name,s1[i].author,s1[i].pubname,&s1[i].number,&s1[i].price);
    }
    for(i=0;i<n;i++){
        if(s1[i].price>500){
            finalprice=s1[i].price+(0.10*s1[i].price);
        }
        else{
            finalprice=s1[i].price+(0.05*s1[i].price);
        }
        printf("%s %.2f\n",s1[i].name,finalprice);
    }
}
