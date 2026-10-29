#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        char str[101];
        scanf("%s",str);
        int size=strlen(str);
        if(size>10)
        {
            printf("%c",str[0]);
            printf("%d",(size-2));
            printf("%c",str[size-1]);
            printf("
");
        }
        else {
            printf("
%s
",str);
 
        }
    }
 
    return 0;
}