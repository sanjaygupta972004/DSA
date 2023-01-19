# include <stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],res[3][3];
int i,j,k;
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
    res[i][j]=0;
    {
        for (k = 0; k < 3; k++)
        {
        res[i][j]+=a[i][k]*b[k][j];
        }
    }
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

