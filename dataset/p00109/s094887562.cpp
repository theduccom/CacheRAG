#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <cstdio>
#include <iomanip>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;


class Source{
private:
    string str;
    int pos;
    
public:
    int peek(){
        if(pos<str.size())return str[pos];
        return -1;
    }
    
    void next(){
        pos++;
    }
    
    void init(string _str){
        str=_str;
        pos=0;
    }
    
};


class Parser{
private:
    Source src;
    
public:
    Parser(string str){
        src.init(str);
    }
    
    bool isDigit(char s){
        if(s>='0'&&s<='9')return true;
        return false;
    }
    
    int number(){
        string res;
        while(src.peek()!=-1&&isDigit(src.peek())){
            res+=src.peek();
            src.next();
        }
        return stoi(res);
    }
    
    int expr(){
        int x=term();
        while(true){
            switch(src.peek()) {
                case '+':
                    src.next();
                    x+=term();
                    continue;
                case '-':
                    src.next();
                    x-=term();
                    continue;
            }
            break;
        }
        return x;
    }
    
    int term(){
        int x=factor();
        while(true){
            switch(src.peek()){
                case '*':
                    src.next();
                    x*=factor();
                    continue;
                case '/':
                    src.next();
                    x/=factor();
                    continue;
            }
            break;
        }
        return x;
    }
    
    int factor(){
        if(src.peek()=='('){
            src.next();
            int res=expr();
            if(src.peek()==')'){
                src.next();
            }
            return res;
        }
        return number();
    }
    
};



int main(){
  
    int n;
    cin>>n;
    
    REP(i,n){
        string s;
        cin>>s;
        
        s=s.substr(0,s.size()-1);
        
        Parser par(s);
        cout<<par.expr()<<endl;
        
    }
    
    return 0;
}