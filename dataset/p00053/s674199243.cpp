//#include <algorithm>
//#include <cctype>
//#include <climits>
#include <cmath>
//#include <complex>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <deque>
//#include <functional>
//#include <iomanip>
#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <sstream>
//#include <stack>
//#include <string>
#include <vector>
//const double pi = 3.14159265358979;
using namespace std;
//typedef long long int lli;
//typedef long long llong;
typedef vector <int> vi;
//typedef vector <llong> vll;
//typedef vector <vi> vvi;
//typedef vector <double> vd;
//typedef vector <string> vs;
//typedef map <int,int> mapii;
//typedef map <char,char> mapcc;
//#define EPS 1e-6
//#define REP(i,n) for (int i=0; i<n; i++)
//#define REP1(i,n1,n2) for (int i=n1; i<n2; i++)
//#define x(ALL) x.begin(), x.end()
//vi primes;
//string A2Z="abcdefghijklmnopqrstuvwxyz";
vi SIEVES;
vi sieve(int n){
    vi s;
    int i,j,m,x,h;
    for (i=1;i<n+2;i+=2) s.push_back(i);
    m=pow(n,0.5)+1;
	h=s.size();
    s[0]=0;
    for (i=0;i<h;i++){
        x=s[i];
        if (x>m) break;
        if (x&&x+i<h)
            for (j=i+x;j<h;j+=x) s[j]=0;
    }
	s[0]=2;
	return s;
}
int main(void){
	int m=105000,n,s,c,i;
	SIEVES=sieve(m);
	while (true){
		cin>>n;
		if (n==0) break;
		s=0;
		c=0;
		for(i=0;i<m;i++)
			if(SIEVES[i]!=0){
				s+=SIEVES[i];
				if(++c==n) break;
			}
		cout<<s<<"\n";
	}
} 