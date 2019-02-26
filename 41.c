# set5
#include<stdio.h>
#include<conio.h>
int main()
{
char str[5];
int k,i;
printf("\nenter a string");
scanf("%s\n",&str);
printf("\nenter the limit");
scanf("%d\n",&k);
for(i=0;i<=k;i++)
{
printf("%s\n",str);
}
return 0;
}
