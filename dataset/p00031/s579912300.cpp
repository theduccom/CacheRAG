#include<iostream>

using namespace std;

int main()
{
	int weight;
	int i,j;
	int ans[10];
	int flag;
	
	for(;cin >> weight;)
	{
		for(i=0;i<10;i++)
			ans[i]=0;
			
		for(i=0;weight>0;weight/=2,i++)
		{
			ans[i]=weight%2;
			if(weight%2==1)
				flag=i;
		}
		
		for(i=0,j=1;i<10;i++,j*=2)
		{
			if(ans[i]==1 && i<flag)
				cout << j << " " ;
			if(i==flag)
				cout << j ;
				
		}
		cout << endl;
	}
}