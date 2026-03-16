#include<iostream>

bool sieve[100000];
void makesieve();

int main()
{
	makesieve();
	while(1)
	{
		int n,s,l;
		std::cin>>n;
		if(std::cin.eof())break;
		for(s=n-1;sieve[s]!=true;s--);
		for(l=n+1;sieve[l]!=true;l++);
		std::cout<<s<<' '<<l<<std::endl;
	}
	return 0;
}

void makesieve()
{
	for(int i=0;i<100000;i++){sieve[i]=true;}
	sieve[0]=false;sieve[1]=false;
	for(int i=2;i<100000;i++)
	{
		for(int j=i*2;j<100000;j+=i)
		{
			sieve[j]=false;
		}
	}
}