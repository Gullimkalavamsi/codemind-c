#include <stdio.h>
int pal(int n)
{
    int rev = 0, remainder;
    
    while (n != 0)
	 {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
   
    return rev;
}
int main()
{
    int num,i,temp;
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<num;i++)
    {
        if(pal(a[i])==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}