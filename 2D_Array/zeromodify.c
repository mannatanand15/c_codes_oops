//The first line consists of two integers r and c, separated by a space, representing the number of rows and columns in the matrix.
//if there are zeros in the matrix, display the modified matrix after replacing entire rows and columns with zeros if any element in the row or column is zero.
// If there are no zeros in the matrix, display the given matrix as it is.

// You are using GCC
#include<stdio.h>
int main(){
    int r,c,i,j;
    //TAKING INPUT FOR ROWS AND COLUMNS
    scanf("%d %d",&r,&c);
    int mat[8][8];
    int rowzero[8]={0};
    int colzero[8]={0};
    //MAKING THE MATRIX
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d ",&mat[i][j]);
        }
    }
    //READ THE MATRIX AND MARK THE ROWS AND COLUMNS CONTAINING ZERO
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==0){
                rowzero[i]=1;
                colzero[j]=1;
            }
        }
    }
    //printing the final matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(rowzero[i] ==1 || colzero[j] ==1){
                printf("0 ");
            }
            else{
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
