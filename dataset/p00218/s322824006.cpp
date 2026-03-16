#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		while(n--)
		{
			int a,b,c;
			cin >> a >> b >> c;
			int ava=(a+b+c)/3;

			if( a==100 || b==100 || c==100 || (a+b)/2>=90 || ava>=80 )cout<<"A"<<endl;
			else if(ava>=70 || ( ava>=50 && (a>=80||b>=80)))cout<<"B"<<endl;	
			else cout << "C" << endl;
		}
	}	
}