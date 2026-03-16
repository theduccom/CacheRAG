#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=3005,INF=1<<29;
typedef string::const_iterator State;

int expr(State &begin);
int term(State &begin);
int factor(State &begin);
int number(State &begin);

int expr(State &begin){
    int ret=term(begin);
    
    for(;;){
        if(*begin=='+'){
            begin++;
            ret+=term(begin);
        }else if(*begin=='-'){
            begin++;
            ret-=term(begin);
        }else break;
    }
    
    return ret;
}

int term(State &begin){
    int ret=factor(begin);
    
    for(;;){
        if(*begin=='*'){
            begin++;
            ret*=factor(begin);
        }else if(*begin=='/'){
            begin++;
            ret/=factor(begin);
        }else break;
    }
    
    return ret;
}

int factor(State &begin){
    if(*begin=='('){
        begin++;
        int ret=expr(begin);
        begin++;
        return ret;
    }else{
        return number(begin);
    }
}

int number(State &begin){
    int ret=0;
    
    while(isdigit(*begin)){
        ret*=10;
        ret+=(*begin-'0');
        begin++;
    }
    
    return ret;
}

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    for(int i=0;i<N;i++){
        string S;cin>>S;
        State a=S.begin();
        cout<<expr(a)<<endl;
    }
}

