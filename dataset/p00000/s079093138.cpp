#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)
#define rep(n) REP(i,n)

int main()
{
	REP(i,9) REP(j,9) cout<<(i+1)<<"x"<<(j+1)<<"="<<(i+1)*(j+1)<<endl;

	return 0;
}