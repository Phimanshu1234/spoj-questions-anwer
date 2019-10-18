#include<stdio.h>
#include<string.h>
#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define lld long long int
#define pii pair<int,int>
#define MOD 1000000007
#define INF (ll)100000000000000000
int main()
{
    char s[20];
    char a[100005][20];
    lld k=0,f,i;
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='\n')
        {
            break;
        }
        else
        {
           if(k==0)
           {
               strcpy(a[k++],s);
           }
            else
            {
                for(i=0;i<k;i++)
                {
                    f=strcmp(a[i],s);
                    if(f==0)
                    {
                       break; 
                    }
                }
                if(f!=0)
                {
                    strcpy(a[k++],s);
                }
            }
        }
    }
        qsort(a,k,20,strcmp);
        printf("%lld\n",k);
        for(i=1;i<=k;i++)
        {
            printf("%lld. %s\n",i,a[i-1]);
        }
    return 0;
}