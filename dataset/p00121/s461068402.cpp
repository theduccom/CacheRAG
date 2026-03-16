#include<map>
#include<queue>
#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
struct node{string ss;int step;}s;
map<string,int>m;
void bfs(void){
    s.ss="01234567";
    s.step=0;
    queue<node>q;
    while(!q.empty())q.pop();
    q.push(s);
    while(!q.empty()){
        node ne=q.front();q.pop();
        if(m[ne.ss])continue;
        m[ne.ss]=ne.step;
        int pos=ne.ss.find('0');
        node no;
        //change the position
        if(pos==0||pos==4){
            no=ne;
            char temp=no.ss[pos];
            no.ss[pos]=no.ss[pos+1];
            no.ss[pos+1]=temp;
            no.step++;
            q.push(no);
        }
        else if(pos==3||pos==7){
            no=ne;
            char temp=no.ss[pos];
            no.ss[pos]=no.ss[pos-1];
            no.ss[pos-1]=temp;
            no.step++;
            q.push(no);
        }
        else{
            no=ne;
            char temp=no.ss[pos];
            no.ss[pos]=no.ss[pos-1];
            no.ss[pos-1]=temp;
            no.step++;
            q.push(no);

            no=ne;
            temp=no.ss[pos];
            no.ss[pos]=no.ss[pos+1];
            no.ss[pos+1]=temp;
            no.step++;
            q.push(no);
        }
            no=ne;
            char temp=no.ss[pos];
            no.ss[pos]=no.ss[(pos+4)%8];
            no.ss[(pos+4)%8]=temp;
            no.step++;
            q.push(no);
    }
    m["01234567"]=0;
}
int main(void){
    bfs();
    int num,cnt=0;
    string s;
    while(cin>>num){
        char ch=num+'0';
        s+=ch;
        if(++cnt==8){
            cnt=0;
            cout<<m[s]<<endl;
            s="";
        }
    }
}