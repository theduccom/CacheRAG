#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int input,temp,a;
int print[11];

int main()
{
	while(scanf("%d",&input)!= EOF)
	{
	a=9;
	temp=512;
	for(int z=0;z<11;z++)
	{
		print[z]=0;
	}
	while(temp>=1)
	{
		if(input<temp)
		{
			temp=temp/2;
		}
		else if(temp<=input&&temp!=1)
		{
			input-=temp;
			print[a]=temp;
			a--;
			temp/=2;
		}
		else
		{
			input-=temp;
			print[a]=temp;
			a--;
			temp=0;
			break;
		}
	}
	for(int z=0;z<11;z++)
	{
		if(print[z]!=0&&print[z+1]!=0)
		printf("%d ",print[z]);
		else if(print[z]!=0)
		printf("%d",print[z]);
	}
	printf("\n");
	}
	return 0;
}