#include <bits/stdc++.h>
using namespace std;
vector<int> b(pow(8,8),-1);
int gethash(vector<int> v){
    int a=0;
    for(int i=0;i<8;i++){
        a=a*8+v[i];
    }
    return a;
}

void haba(vector<int> v){
    queue<pair<vector<int>,int>> q;
    q.push({v,0});
    while(!q.empty()){
        vector<int> t=q.front().first;
        int c=q.front().second;
        b[gethash(t)]=c;
        q.pop();
        vector<int> t1=t,t2=t,t3=t,t4=t;
        for(int i=0;i<8;i++){
            if(t[i]==0&&i!=3&&i!=7){
                swap(t1[i],t1[(i+1)%8]);
                if(b[gethash(t1)]==-1)q.push({t1,c+1});
            }
        }
        for(int i=0;i<4;i++){
            if(t[i]==0){
                swap(t2[i],t2[(i+4)%8]);
                if(b[gethash(t2)]==-1)q.push({t2,c+1});
            }
        }
        for(int i=0;i<8;i++){
            if(t[i]==0&&i!=0&&i!=4){
                swap(t3[i],t3[(i-1)%8]);
                if(b[gethash(t3)]==-1)q.push({t3,c+1});
            }
        }
        for(int i=4;i<8;i++){
            if(t[i]==0){
                swap(t4[i],t4[(i+4)%8]);
                if(b[gethash(t4)]==-1)q.push({t4,c+1});
            }
        }
    }
}

void solve(vector<int> v){
    cout<<b[gethash(v)]<<endl;
}

int main(void){
    int a,b,c,d,e,f,g,h;
    vector<int> v={0,1,2,3,4,5,6,7};
    haba(v);
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        v.push_back(e);
        v.push_back(f);
        v.push_back(g);
        v.push_back(h);
        solve(v);
    }
}

