#include<stdio.h>
int main()
{ int n,a[1000],i,c=0;
scanf("%d",&n);
while(n!=0)
{
a[c]=n%10;
n=n/10;
c++;
}
for(i=0;i<c;i++)
printf("%d",a[i]);
}
