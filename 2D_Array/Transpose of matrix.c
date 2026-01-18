// TO FIND THE TRANSPOSE OF MATRIX WE INTERCHANGE THE ROWS AND COLUMNS OF MATRIX
// You are using GCC
#include<stdio.h>
int main(){
    int n,i,j;
    int sym=0;
    scanf("%d",&n);
    int mat[n][n];
    int t[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix:\n");
    //CREATING TRANSPOSE OF MATRIX
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            t[j][i]=mat[i][j];
        }
    }
    //PRINTING TRANSPOSE OF MATRIX
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    //TO FIND IF THE MATRIX IS SYMMETRIC OR NOT
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]!=mat[j][i]){
                sym=1;
                break;
            }
        }
        if (sym==0){
            break;
        }
    }
    if(sym==0){
        printf("Matrix is Symmetric!");
    }
    else{
        printf("Matrix is not Symmetric!");
    }
    return 0;
}
