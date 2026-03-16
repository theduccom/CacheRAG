#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)
typedef string::const_iterator State;

string s;

int eval(State &beg);

int number( State &beg ){
    if(*beg=='('){
        beg++;
        int ret = eval(beg);
        beg++;
        return ret;
    }
    
    string ret="";
    while(1){
        if( isdigit(*beg) ){
            ret+=*beg;
            beg++;
        }
        else break;
    }
    
    return stoi(ret);
}

int term(State &beg){
    int ret = number(beg);
    
    while(1){
        if( *beg=='*' ){
            beg++;
            ret *= number(beg);
        }
        else if( *beg=='/' ){
            beg++;
            ret /= number(beg);
        }
        else break;
    }

    return ret;
}

int eval(State &beg){
    int ret=term(beg);
    
    while(*beg!='=' && *beg!=')'){
        beg++;
        if(*(beg-1)=='+')       ret+=term(beg);
        else if(*(beg-1)=='-')  ret-=term(beg);
        else throw("error");
    }
    return ret;
}
int main(){
    int n;
    cin>>n;
    rep(i,n){
        cin>>s;
        
        State beg = s.begin();
        try{
            cout<<eval(beg)<<endl;
        }catch(string s){
            cout<<s<<endl;
        }
    }
}