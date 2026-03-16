#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
const int INF=1145141919,MOD=1e9+7;
const long long LINF=8931145141919364364,LMOD=998244353;
inline long long mod(long long n,long long m){return(n%m+m)%m;}
// const int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,-1,0,1,1,-1,-1,1};

template<class T>
struct Parser{
    typedef string::const_iterator itr;
    itr begin;
    T ans;
    Parser(const string &s){
        begin=s.begin();
        ans=expr(begin);
        // cerr<<s<<" "<<ans<<"\n";
    }
    T expr(itr &begin){
        T ret=term(begin);
        while(1){
            if((*begin)=='+'){
                consume(begin,'+');
                ret+=term(begin);
            }else if((*begin)=='-'){
                consume(begin,'-');
                ret-=term(begin);
            }else{
                return ret;
            }
        }
    }
    T numb(itr &begin){
        T ret=0;
        while('0'<=(*begin)&&(*begin)<='9'){
            ret*=10;
            ret+=(*begin)-'0';
            begin++;
        }
        return ret;
    }
    T fact(itr &begin){
        T ret=0;
        if((*begin)=='('){
            consume(begin,'(');
            ret=expr(begin);
            consume(begin,')');
        }else{
            ret=numb(begin);
        }
        return ret;
    }
    T term(itr &begin){
        T ret=fact(begin);
        while(1){
            if((*begin)=='*'){
                consume(begin,'*');
                ret*=fact(begin);
            }else if((*begin)=='/'){
                consume(begin,'/');
                ret/=fact(begin);
            }else{
                return ret;
            }
        }
    }
    void consume(itr &begin,char expected){
        if(*begin==expected){
            begin++;
        }else{
            fprintf(stderr,"Expected: '%c' Got: '%c'\n",expected,*begin);
            fprintf(stderr,"Rest string is ");
            while(*begin){
                fprintf(stderr,"%c",*begin++);
            }
        }
    }
};

int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        Parser<int> parse(s);
        cout<<parse.ans<<"\n";
    }
    return 0;
}

