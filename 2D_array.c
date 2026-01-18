// The output prints the sum of each row of the matrix in each line.
#include<stdio.h>
int main(){
    int mat [3][3];
    int i,j,sum;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    //to print sum of each row
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum +=mat[i][j];
        }
        printf("Sum of row %d : %d \n",i,sum);
    }
}
//The output displays the lower triangular matrix based on the input, with elements above the main diagonal replaced by zeros.
// You are using GCC
#include<stdio.h>
int main(){
    int n,i,j;
    //taking input of the size of matrix 
    scanf("%d",&n);
    //making the matrix
    int mat[n][n]; //matrix size should depend on n and not on loop variables
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i>=j){
                printf("%d ",mat[i][j]);            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
