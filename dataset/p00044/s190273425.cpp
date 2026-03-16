#include <iostream>
using namespace std;
bool num[50021];
int main()
{
	int n;
	while(cin >> n)
	{
		num[0]=num[1]=true; for(int i=2;i<=n;i++) num[i]=false;
		int ansup,anslow;
		for(int i=2;i<=50000;i++)
		{
			if(num[i]==false)
			{
				for(int j=i*2;j<=50021;j+=i) num[j]=true;
			}
		}
		for(int j=n+1; ;j++) if(num[j]==false) {ansup=j; break;}
		for(int j=n-1; ;j--) if(num[j]==false) {anslow=j; break;}
		cout << anslow << ' ' << ansup << '\n' ;
	}
}