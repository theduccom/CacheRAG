#include<bits/stdc++.h>
using namespace std;

int p=0;
int formula(string& s);

int num(string& s){
    int res=0;
    int op=1;
    if(s[p]=='-'){
        op=-1;
        p++;
    }
    else if(s[p]=='+'){
        op=1;
        p++;
    }
    while(isdigit(s[p])){
        res*=10;
        res+=s[p]-'0';
        p++;
    }
    return op*res;
}

int term(string & s){
    if(s[p]=='('){
        p++;
        int res=formula(s);
        p++;
        return res;
    }
    return num(s);
}

int section(string& s){
    int res=term(s);
    while(p!=s.size() && s[p]!=')' && s[p]!='+' && s[p]!='-'){
        char op=s[p];
        p++;
        int next=term(s);
        if(op=='*') res*=next;
        else res/=next;
    }
    return res;
}

int formula(string& s){
    int res=section(s);
    while(p!=s.size() && s[p]!=')'){
        char op=s[p];
        p++;
        int next=section(s);
        if(op=='+') res+=next;
        else res-=next;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s.pop_back();
        p=0;
        cout<<formula(s)<<endl;
    }
    return 0;
}
