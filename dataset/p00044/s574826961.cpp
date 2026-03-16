#include<iostream>
#include<set>

using namespace std;

int main()
{
	int n;
	int i,j,k;
	int num[60000];
	int pri[100000];
	set<int> prime;
	
	pri[0]=2;
	
	for(i=0;i<60000;i++)
		num[i]=1;
	
	num[0]=0;
	num[1]=0;
	for(i=0;pri[i]<50022;)
	{
		for(j=1;pri[i]*j<50100;j++)
		{
			num[pri[i]*j]=0;
//			cout << "*" << pri[i]*j << endl;
		}
		for(k=0;;k++)
		{
			if(num[k]==1)
			{
//				cout << "pri:" << pri[i] << endl;;
				i++;
				pri[i]=k;
//				cout << k <<endl;
				break;
			}
		}
	}
	
	
	for(j=0;j<i;j++)
		prime.insert(pri[j]);
		
	set<int>::iterator it=prime.begin();
	for(;it!=prime.end();)
	{
//		cout << "it: " << *it << endl;
		it++;
	}
	for(;cin >> n;)
	{
	
		it=prime.lower_bound(n);
		if(*it==n)
		{
			cout << *(--it) << " " ;
			++it;
			cout << *(++it) << endl;
		}
		else
		{
			cout << *(--it) << " ";
			++it;
			cout << *(it) << endl;
		}
	}
}