/* Write a C program to:
Dynamically allocate memory for N students.
Store:
Roll No
Name
Marks in 3 subjects
Calculate:
Total
Average
Store records in a binary file students.dat
Display students whose average > 75.
*/

#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[50];
    float m1,m2,m3;
    float total,avg;
};
int main(){
    int n,i;
    FILE *fp;
    struct student *s;
    s=(struct student*)malloc(n*sizeof(struct student));
    if(s==NULL){
        printf("memory failed");
        return 1;
    }
    for(i=0;i<n;i++){
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f %f %f",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].avg=s[i].total/3;
    }
    fp=fopen("students.dat","wb");
    fwrite(s,sizeof(struct student),n,fp);
    fread(s,sizeof(struct student),n,fp);
    for(i=0;i<n;i++){
        if(s[i].avg>75){
            printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].avg);
        }
    }
    fclose(fp);
    free(s);
    return 0;
}
