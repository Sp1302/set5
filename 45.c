# set5
#nclude<stdio.h>
int main()
{
int n,c=0,n1;
printf("\nenter the number");
scanf("%d\n",&n);
while(n>0)
{
n1=n%10;
c++;
n=n/10;
}
printf("%d\n",c);
return 0;
}
