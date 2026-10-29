#include <stdio.h>
#include <math.h>
int main()
{
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
 
    long long l = (n + a - 1) / a;
    long long b = (m + a - 1) / a;
 
    long long t = l * b;
 
    printf("
%lld", t);
    return 0;
}