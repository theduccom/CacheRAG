#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
using namespace std;

vector<int> nextstate(int x_)
{
    vector<int> x(8);
    int cnt = 0;
    while(x_){
        x[7-cnt]=x_%10;
        cnt++;
        x_ /= 10;
    }
    if(cnt==7)x[0]=0;

    vector<int> res;
    int d[4]={1,-1,4,-4};
    int id;
    for(int i=0;i<8;i++)if(x[i]==0){id=i; break;}
    for(int i=0;i<4;i++){
        int nid = id+d[i];
        if(nid>=0 && nid<8){
            if(d[i]==-1&&nid==3 || d[i]==1&&nid==4)continue;
            vector<int> tmp = x;
            int tmp_ = 0;
            swap(tmp[id], tmp[nid]);
            for(int i=0;i<8;i++){
                tmp_ *= 10;
                tmp_ += tmp[i];
            }
            res.push_back(tmp_);
        }
    }
    return res;
}

// vector<int> s;
int s;

void input()
{
    int t;
    for(int i=0;i<8;i++){
        cin>>t;
        s *= 10;
        s += t;
        // s.push_back(t);
    }
}

map<int, int> known;

void bfs(int s)
{
    queue<int> que;
    que.push(s);
    known[s] = 0;
    while(!que.empty()){
        int cur = que.front();
        que.pop();
        vector<int> nexts = nextstate(cur);
        // cout<<"*"<<cur<<endl;
        for(int i=0;i<nexts.size();i++){
            if(known.find(nexts[i])==known.end()){
                known[nexts[i]] = known[cur] + 1;  
                que.push(nexts[i]);
                // cout<<nexts[i]<<endl;
            }
        }
    }
    return;
}


int main()
{
    // input();
    // vector<int> res = nextstate(s);
    // cout<<res.size()<<endl;
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<endl;
    // }
    bfs(1234567);
    vector<int> in(8);
    while( 8 == scanf("%d %d %d %d %d %d %d %d",
		&in[0],&in[1],&in[2],&in[3],&in[4],&in[5],&in[6],&in[7]) )
	{
		int tmp = 0;
        for(int i=0;i<8;i++){
            tmp *= 10;
            tmp += in[i];
        }
        cout<<known[tmp]<<endl;
	}

    return 0;
}

