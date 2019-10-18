#include <stdio.h>
extern int getline(char [], int);
int getline(char line[], int max)
{
int nch = 0;
int c;
max = max-1;			
    while((c = getchar()) != EOF)
	{
	if(c == '\n')
		break;
 
    	if(nch < max)
		{
		line[nch] = c;
		nch = nch + 1;
		}
	}
 
if(c == EOF && nch == 0)
	return EOF;
 
line[nch] = '\0';
return nch;
}
int main()
{
char line[1000];
 
while(getline(line,1000) != EOF)
{
    int a[26]={},c=0;
    for(int i=0;i<strlen(line);i++)
    {
    if((int)line[i]>=97&&(int)line[i]<=122&&a[(int)line[i]-97]==0)
    c++;
    a[(int)line[i]-97]++;
    }
    printf("%d\n",c);
}
 
return 0;
}