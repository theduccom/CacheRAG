#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

const double EPS = 0.1;

int main(){
	
	while(1){
		string a;
		getline(cin,a);
		
		if(cin.eof())break;
		
		rep(i,26){
			string s;
			rep(j,a.size()){
				if(a[j]<'a' || a[j]>'z')s+=a[j];
				else s+=(a[j]-'a'+i)%26+'a';
			}
			if(s.find("this")!=-1 || s.find("the")!=-1 || s.find("that")!=-1){
				cout<<s<<endl;
				goto A;
			}
		}
		A:;
	}
}