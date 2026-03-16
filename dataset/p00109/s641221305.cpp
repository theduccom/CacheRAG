#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<functional>
#include<utility>
#include<queue>
#include<string.h>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
typedef string::const_iterator State;
int Factor(State& begin);

int numParse(State& begin){
    int tmp=0;
    bool f=false;
    if(*begin=='-')f=true;
    while(isdigit(*begin)){
        tmp*=10;
        tmp+=*begin-'0';
        begin++;
    }
    if(*begin=='=')begin++;
    return f ? -tmp:tmp;
}
int MulDiv(State& begin){
    int tmp=Factor(begin);
    while(1){
        if(*begin=='*'){
            begin++;
            tmp *= Factor(begin);
        }else if(*begin=='/'){
            begin++;
            tmp /= Factor(begin);
        }else{
            break;
        }
    }
    return tmp;
}

int AddSub(State& begin){
    int tmp=MulDiv(begin);
    while(1){
        if(*begin=='+'){
            begin++;
            tmp+=MulDiv(begin);
        }else if(*begin=='-'){
            begin++;
            tmp-=MulDiv(begin);
        }else {
            break;
        }
    }
    return tmp;
}

int Factor(State& begin){
    if(*begin=='('){
        begin++;
        int tmp=AddSub(begin);
        begin++;
        if(*begin=='=')begin++;
        return tmp;
    }else{
        return numParse(begin);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s2;
        cin>>s2;
        string s1="0";
        if(s2[0]!='-')s1+="+";
        string s=s1+s2;
        State begin=s.begin();
        int ans=AddSub(begin);
        cout<<ans<<endl;
    }
    return 0;
}
