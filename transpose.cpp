#include<stdio.h>
int main()
{
int m,n,c=1,c_symmetric = 1, c_skewSymmetric = 1;
printf("Enter the matrix order m:");
scanf("%d",&m);
printf("Enter the matrix order n:");
scanf("%d",&n);
int a[m][n],at[n][m];
int i,j;
printf("\nEnter the array elemnts:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter element(%d,%d):",i+1,j+1);
scanf("%d",&a[i][j]);
at[j][i]=a[i][j];
}
}
printf("\n The original matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n The transpose:");printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",at[i][j]);
}
printf("\n");
}
printf("\n");

// Check for symmetry and skew symmetry
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != at[i][j]) {
                c_symmetric = 0;
                //break;
            }
            if(a[i][j] != -at[i][j]) {
                c_skewSymmetric = 0;
                //break;
            }
        }
    }
    
    if(c_symmetric && c_skewSymmetric) {
        printf("\nThe matrix is both symmetric and skew symmetric.\n");
    } else if(c_symmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else if(c_skewSymmetric) {
        printf("\nThe matrix is skew symmetric.\n");
    } else {
        printf("\nThe matrix is neither symmetric nor skew symmetric.\n");
    }

return 0;
}
