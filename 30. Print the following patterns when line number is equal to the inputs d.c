#include<stdio.h>
int main()
{
 int a,i,j;
 a=5;
 //scanf("%d",&a);
 for (i=1;i<=a;i++)
{
    for (j=i;j<=a;j++)
        {
        printf(" ");
        }
        for (j=1;j<=i;j++)
        {
        printf(" *");
        }
        printf("\n");
}
return 0;
}
