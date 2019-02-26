# set5
#include<stdio.h>
int main()
{
int n,a[50],sum=0,avg,i;
printf("\nenter the limit");
scanf("%d",&n);
printf("\nenter the number");
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
printf("\naverage is");
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("%d\n",avg);
return 0;
}
