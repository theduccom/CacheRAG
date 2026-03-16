#include <iostream>
using namespace std;

int isprime(int n);
int isSmallTwinPrime(int n);
int GetMaxTwinPrimeNumber(int argRange);

int main()
{
	int const size = 10000;
	int data[size];	
	
	int i=0;
	while(1) //for(int i=0; data[i]!=0; i++)
	{
		cin >> data[i];
		if(data[i]<=0) break;
		i++;
	}
	
	int outputNum;
	
	for(int i=0; data[i]!=0; i++)
	{
		outputNum = GetMaxTwinPrimeNumber(data[i]);
		if(outputNum!=0)
		{
			cout << outputNum-2 << " " << outputNum << endl;
		}
	}
	
	return 0;
}

int isprime(int n) 
{
	for(int i = 2; i * i <= n; i++) 
	{
		if(n % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}

int isSmallTwinPrime(int n)
{
	for(int i = 2; i * i <= n; i++) 
	{
		if((n-2) % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}

int GetMaxTwinPrimeNumber(int argRange)
{
	int maxTwinPrimeNum = 0;
	
	for(int i=0; ; i++)
	{
		int Num = argRange - i;
		
		if(isprime(Num)==1 && isSmallTwinPrime(Num)==1)
		{
			maxTwinPrimeNum = Num;
			return maxTwinPrimeNum;
		}
		
		if(Num==0)
		{
			return 0;
		}
	}
}