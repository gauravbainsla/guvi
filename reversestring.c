#include<stdio.h>
#include<string.h>
int main()
{char str[10000];
int i,n=0;
gets(str);
n=strlen(str);
for(i=n-1;i>=0;i--)
printf("%c",str[i]);
}
