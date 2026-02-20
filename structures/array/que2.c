/*Input format :
The first line contains an integer n, representing the number of students.



The next n lines each contain:

An integer rollno, representing the student's roll number.

A string name representing the student's name.

Three integers representing the marks in Tamil, English, and Maths, respectively.

Output format :
For each student, print the average marks (rounded to two decimal places) on the same line, separated by spaces.
*/
#include<stdio.h>

struct student{
    int roll;
    char name[50];
    int tamil;
    int english;
    int maths;
};

int main(){
    struct student s[100];
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %s %d %d %d",
              &s[i].roll,
              s[i].name,
              &s[i].tamil,
              &s[i].english,
              &s[i].maths);
    }

    for(i=0;i<n;i++){
        double average = (s[i].tamil +
                          s[i].english +
                          s[i].maths) / 3.0;

        printf("%.2lf", average);

        if(i != n-1)   // avoid extra space at end
            printf(" ");
    }

    return 0;
}
