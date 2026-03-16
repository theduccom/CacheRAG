#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>
#include <math.h>
#include <queue>
#include <stack>

using namespace std;



string tranceRPN(string in_formula, string out_formula, stack<char> st){
    
    if(in_formula.size() == 0){
        while(!st.empty()){
            out_formula+=st.top();
            st.pop();
        }
        //cout<<st.top()<<endl;;;
        return out_formula;//処理終了
    }
    
    char top = in_formula[0];
    in_formula.erase(0,1);
    //cout<<in_formula<<endl;
    
    if(top=='=')return tranceRPN(in_formula,out_formula,st);
    
    if(('0'<=top&&top<='9')||top==' ')out_formula+=top;
    else if(top==')'){
        while(1){
            if(st.top()=='('){
                st.pop();
                break;
            }
            out_formula+=st.top();
            st.pop();
        }
    }else if(top=='(')st.push(top);
    else if(st.empty())st.push(top);
    else if(((st.top()=='*'||st.top()=='/')&&(top=='+'||top=='-'))
            ||((st.top()=='*'||st.top()=='/')&&(top=='*'||top=='/'))
            ||((st.top()=='+'||st.top()=='-')&&(top=='+'||top=='-'))
            ){
        out_formula+=st.top();
        st.pop();
        in_formula=top+in_formula;
    }else{
        st.push(top);
    }
    return tranceRPN(in_formula,out_formula,st);
    
    
}

int RPN(string s){
    int x=0;
    stack<int> st;
    bool flag=false;
    while(1){
        if(s.size()==0){
            break;
        }else if('0'<=s[0]&&s[0]<='9'){
            x=x*10+s[0]-'0';
            flag=true;
            s.erase(0,1);
        }else if(s[0]==' '&&flag){
            flag=false;
            st.push(x);
            x=0;
            s.erase(0,1);
        }else if(s[0]=='+'){
            s.erase(0,1);
            int y,z;
            y=st.top();
            st.pop();
            z=st.top();
            st.pop();
            st.push(y+z);
        }else if(s[0]=='-'){
            s.erase(0,1);
            int y,z;
            y=st.top();
            st.pop();
            z=st.top();
            st.pop();
            st.push(z-y);
        }else if(s[0]=='*'){
            s.erase(0,1);
            int y,z;
            y=st.top();
            st.pop();
            z=st.top();
            st.pop();
            st.push(y*z);
        }else if(s[0]=='/'){
            s.erase(0,1);
            int y,z;
            y=st.top();
            st.pop();
            z=st.top();
            st.pop();
            st.push(z/y);
        }else{
            s.erase(0,1);
        }
    }
    return st.top();
}
/*
(1+4)*(3+7)/5
 
 
*/

int main(){
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s,rs;
        stack<char> st;
        cin>>s;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='+'||s[i]=='*'||s[i]=='-'||s[i]=='/'||s[i]==')'||s[i]=='('||s[i]=='=')s.insert(i++, " ");
        }
        s+=" ";
        //cout<<s<<endl;
        
        rs=tranceRPN(s,rs,st);
        //cout<<rs<<endl;
        
        cout<<RPN(rs)<<endl;
    }
    
    
    
}