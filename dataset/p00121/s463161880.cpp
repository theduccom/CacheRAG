#include <bits/stdc++.h>
using namespace std;
int a[10];
map<string,int> mp;
string s0="01234567";
int dx[4]={1,-1,4,-4};
queue<string> que;
void bfs()
{
    que.push(s0);
    mp[s0]=1;
    while(!que.empty()) {
        string str=que.front();
        //cout<<str<<endl;
        que.pop();
        int pos;
        for(pos=0;pos<8;pos++) {
            if(str[pos]=='0') break;
        }
        for(int i=0;i<4;i++) {
            if(pos==3&&i==0) continue;
            if(pos==4&&i==1) continue;
            int x=pos+dx[i];
            if(x<0||x>=8) continue;
            string sss=str;
            sss[pos]=str[x];
            sss[x]=str[pos];
            if(!mp[sss]) {
                que.push(sss);
                mp[sss]=mp[str]+1;
                //cout<<sss<<endl;
            }

        }
    }
    return;

}
int main()
{
    bfs();
    while(scanf("%d",&a[0])==1) {
        for(int i=1;i<8;i++) scanf("%d",&a[i]);
        string s;
        for(int i=0;i<8;i++) s+=a[i]+'0';
        //cout<<s<<endl;
        cout<<mp[s]-1<<endl;

    }

    return 0;
}

