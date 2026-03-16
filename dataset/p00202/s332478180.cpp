
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>

using namespace std;

const int N = 1000000;

int prime[N+1];
int table[N+1];
int dish[30];
int n, x;
int max_val;

void setPrime()
{
	memset(&prime[0], 0, sizeof(int) * (N+1));
	prime[2] = 1;
	for(int i=2; i<=N; i++)
	{
		bool is_prime = true;
		int limit = sqrt(i);
		for(int k=2; k<=limit; k++)
		{
			if(i % k == 0)
			{
				is_prime = false;
				break;
			}	
		}
		
		if(is_prime)
		{
			prime[i] = 1;
		}
	}
}

void solve()
{
	int price;
	queue<int> q;
	q.push(0);
	
	while(!q.empty())
	{
		price = q.front();
		q.pop();
		
		if(price > x)
		{
			continue;
		}
		
		if(prime[price] == 1 && max_val < price)
		{
			max_val = price;
		}
		
		for(int k=0; k<n; k++)
		{
			int new_price = price + dish[k];
			if(new_price > N)
				continue;
			if(table[new_price] == 0)
			{
				table[new_price] = 1;
				q.push(new_price);
			}
		}
	}
}

int main()
{
	setPrime();
	
	while( 1 )
	{
		cin >> n >> x;
		if(n==0 && x==0)
		{
			break;
		}
		
		clock_t t = clock();
		for(int i=0; i<n; i++)
		{
			cin >> dish[i];
		}
		
		memset(&table[0], 0, sizeof(int)*(N+1));
		max_val = 0;
		solve();
		
		if(max_val != 0)
		{
			printf("%d\n", max_val);
		}
		else
		{
			printf("NA\n");
		}
	}
}	