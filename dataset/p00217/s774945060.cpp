#include<iostream>
#include<cstdio>
#include <cstring>
#include<map>
#include<string>
#include<stack>
#include <sstream>
#include<vector>
using namespace std;


int main(){
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		multimap < int,int,greater<int> > mp;
		while(n--)
		{
			int num,kyo1,kyo2;
			cin>>num>>kyo1>>kyo2;
			mp.insert( make_pair( kyo1+kyo2, num) );
		}
		multimap<int , int , greater<int> > :: iterator it = mp.begin();
		cout<<(*it).second<<" "<<(*it).first<<endl;
	}
	return 0;
}