#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int main(){

    string s[] = {"the","this","that"};
    string in;
    while(true){
	getline(cin,in);
	if(cin.eof()) break;
	bool f = false;
	int d = 1;
	REP(i,30){

	    f = true;
	    REP(i,in.size()){
		if(in[i] == '.' || in[i] == ' ' || in[i] == '\n') continue;
		in[i]= (char)( 'a' + ( (int)(in[i] - 'a') + d) % 26);
	    }
	    vector<bool> flgs(3,false);
	    REP(j,3){
		if(in.substr(0,s[j].size()) == s[j] && in[s[j].size()] == ' ') flgs[j] = true;
	    }
	    for(int i=0;i<in.size();i++){
		if(in[i] == ' '){
		    REP(j,3){
			if(in.substr(i+1,s[j].size()) == s[j] && in[i + s[j].size() + 1] == ' ') flgs[j] = true;
		    }
		}
	    }
	    if(flgs[0] || flgs[1] || flgs[2]) break;
	}
	cout << in << endl;
    }

    return 0;
}