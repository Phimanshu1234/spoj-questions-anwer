#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(a==0)
    return b;
    else
    {
        return gcd(b%a,a);
    }
}
int main()
{
    long long int a,b,k;
    while(2>1)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            k=gcd(a,b);
            printf("%lld\n",k);
        }
    }
    return 0;
} 