#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


vector<string> toRPN(string s){
    stack<string> ope;
    vector<string> ret;
    int len=s.size();
    
    for(int i=0;i<len;i++){
        if( isdigit(s[i]) ){
            string tmp="";
            for(int j=i;j<len;j++){
                if( isdigit(s[j]) )tmp+=s[j];
                else break;
            }
            ret.push_back(tmp);
            i+=tmp.size()-1;
            
        }else{
            if( s[i]=='(' )ope.push("(");
            
            else if( s[i]==')' ){
                if( ope.empty() )return {"invalid"};
                
                while( ope.top()!="(" ){
                    ret.push_back( ope.top() );
                    ope.pop();
                    
                    if( ope.empty() )return {"invalid"};
                }
                if( ope.empty() )return {"invalid"};
                ope.pop();
                
            }else if( s[i]=='*' || s[i]=='/' ){
                while( ope.size() && ( ope.top()=="*" || ope.top()=="/" ) ){
                    ret.push_back( ope.top() );
                    ope.pop();
                }
                ope.push( string(1,s[i]) );
                
            }else if( s[i]=='+' || s[i]=='-' ){
                while( ope.size() && ( ope.top()=="*" || ope.top()=="/" || ope.top()=="+" || ope.top()=="-" ) ){
                    ret.push_back( ope.top() );
                    ope.pop();
                }
                ope.push( string(1,s[i]) );
            }
        }
    }
    while( ope.size() ){
        ret.push_back( ope.top() );
        ope.pop();
    }
    
    return ret;
}




int solveRPN(vector<string> s){
    stack<int> stk;
    
    
    for(int i=0;i<s.size();i++){
        if( (s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/") )stk.push( stoi(s[i])  );
        else{
            int b=stk.top(); stk.pop();
            int a=stk.top(); stk.pop();
            
            if(s[i]=="+")stk.push(a+b);
            if(s[i]=="-")stk.push(a-b);
            if(s[i]=="*")stk.push(a*b);
            if(s[i]=="/")stk.push(a/b);
        }
    }
    
    
    return stk.top();
}


int main(){
    int n;
    cin>>n;
    rep(i,n){
        string s;
        cin>>s;
        
        s.erase(s.size()-1);
        
        vector<string> poland;
        poland=toRPN(s);
        
//        rep(i,poland.size())cout<<poland[i];cout<<endl;
        
        int ans;
        ans=solveRPN(poland);
        
        cout<<ans<<endl;
    }
    
    return 0;
}