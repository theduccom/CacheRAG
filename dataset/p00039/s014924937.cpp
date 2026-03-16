#include <iostream>
#include <map>
#include <string>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)

int main(void){
	map <char, int> m;
	int num[] = {1,5,10,50,100,500,1000};
	REP(i,7)
		m["IVXLCDM"[i]] = num[i];

	char c;
	string r;
	while (cin>>r){
		int tmp, tmp2= m[r[0]], s=0;
		REP(i,r.size()){
			tmp = m[r[i]];
			if (tmp2<tmp)
				s-= tmp2*2;
			s += tmp;
			tmp2 = tmp;
		}
		cout<<s<<endl;
	}
}