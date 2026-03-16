#include<iostream>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<vector>

using namespace std;
typedef unsigned int val;

struct pred{
	bool operator()(int m, int n) { return m - n == 2; }
};

int main() {
	int n;
	while(cin>>n && n)
	{
		vector<int>so(10000);
		so.clear();
		bool flag[10010];
		for(int i=0; i<=10010; i++) flag[i]=true;
		flag[0]=flag[1]=false;
		for(int i=2; i<=n; i++)
		{
			if( flag[i] )
			{
				so.push_back(i);
				for(int j=i*2; j<=n; j+=i) flag[j]=false;
			}
		}
		vector<int>::reverse_iterator ite = adjacent_find(so.rbegin(), so.rend(), pred());
		cout<< *(ite+1) << " "<< *ite << endl;

	}
	return 0;
}