#include<stdio.h>
int main()
{
    int n,i,a,b,c,cp=0;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c>=2)
    {
    cp++;
    }
    }
    printf("%d",cp);
 
    return 0;
}