#include<stdio.h>
int main()
{
    int n,i,p=1,s=0;
    scanf("%d",&n);
    for(i=0;n>0;)
    {
      i=n%10;
      n=n/10;
      s=s+i;
      p=p*i;
    }
    printf("%d",p-s);
   
}