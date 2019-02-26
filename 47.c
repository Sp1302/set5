# set5
#include<stdio.h>
int main()
{
int a[50],i,j,k,temp;
printf("\nenter a limit");
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
 if(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
  a[j]=temp;
}
}
}
for(i=0;i<k;i++)
{
printf("%d\n",a[i]);
}
printf("smallest number %d\n",a[0]);
printf("largest number %d\n",a[k-1]);
return 0;
}
