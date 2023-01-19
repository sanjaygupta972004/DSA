# include <stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],res[3][3];
int i,j;
printf("enter the elements of matrix a:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    scanf("%d",&a[i][j]); 
}
printf("\n");
}
printf("enter the elements matrix:b");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    scanf("%d",&b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    res[i][j]=a[i][j]*b[i][j]+a[i][j]*b[j][i];
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    printf("%d ",res[i][j]);
}
printf("\n");
}
}