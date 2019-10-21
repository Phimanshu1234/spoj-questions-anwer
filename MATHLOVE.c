#include<stdio.h>
#include<math.h>
int main()
{
 long long int T,p,r;
 double N;
 scanf("%lld",&T);
 while (T--)
 {
  scanf("%lld",&p);
  N=(-1+sqrt(1+8*p))/2;
  r=(int)N;
  if(N==r)
  {
  	printf("%lld\n",r);
  }
  else
  {
  	printf("NAI\n");
  }
 }
 return 0;
} 