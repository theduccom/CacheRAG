#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<string>
#include<bitset>
#include<cstring>
#include<list>
using namespace std;
typedef vector<int>VI;
typedef vector<VI>VVI;
typedef vector<string>VS;
typedef pair<int,int>PII;
typedef long long LL;
typedef pair<LL,LL>PLL;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define PB push_back
#define EACH(i,c) for(typeof((c).begin())i=(c).begin();i!=(c).end();i++)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define F first
#define S second

typedef string::const_iterator State;
int Number(State &Begin){
    int ret=0;
    while(isdigit(*Begin)){
        ret*=10;
        ret+=(*Begin)-'0';
        Begin++;
    }

    return ret;
}
int Expression(State&);
int Factor(State &Begin){
    if(*Begin=='('){
        Begin++;
        int ret=Expression(Begin);
        Begin++;
        return ret;
    }
    else return Number(Begin);
}

int Term(State &Begin){
    int ret=Factor(Begin);
    while(true){
        if(*Begin=='*'){
            Begin++;
            ret*=Factor(Begin);
        }
        else if(*Begin=='/'){
            Begin++;
            ret/=Factor(Begin);
        }
        else break;
    }
    return ret;
}

int Expression(State &Begin){
    int ret=Term(Begin);
    while(true){
        if(*Begin=='+'){
            Begin++;
            ret+=Term(Begin);
        }
        else if(*Begin=='-'){
            Begin++;
            ret-=Term(Begin);
        }
        else break;
    }
    return ret;
}

int main(){
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        string str;
        getline(cin,str);
        State Begin=str.begin();
        cout<<Expression(Begin)<<endl;
    }
    return 0;
}