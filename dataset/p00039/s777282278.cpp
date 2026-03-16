#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	int t[101],l[100],i,j,r;
	l['I']=1;
	l['V']=5;
	l['X']=10;
	l['L']=50;
	l['C']=100;
	l['D']=500;
	l['M']=1000;
	for(;gets(s);)
	{
		memset(t,0,sizeof(t));
		t[0]=l[s[0]];
		for(i=1,j=0;s[i];i++)
		{
			if(s[i]==s[i-1])
				t[j]+=l[s[i]];
			else
			{
				if(l[s[i]]>l[s[i-1]])
					t[j]*=-1;
				t[++j]+=l[s[i]];
			}
		}
		for(i=r=0;i<=j;i++)
			r+=t[i];
		printf("%d\n",r);
	}
	return 0;
}