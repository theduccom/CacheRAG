//
//  0121.cpp
//  
//
//  Created by Yoshida Satoshi on 2017/11/16.
//
//

#include <iostream>
#include <queue>
#include <stdlib.h>
#include <algorithm>
#include <map>

#define INF 100000


using namespace std;

int main(){
    int num[8];
    queue<vector<int> > que;
    vector<int> state;
    state.push_back(1);
    for(int i=0;i<8;i++) state.push_back(i);//?????????????´????0??????????????????????????????
    vector<int> tmp;
    vector<int> input;
    map<vector<int>, int> depth;
    int start;
    
    que.push(state);
    depth[state]=0;
    
    while(que.size()){
        tmp=que.front(); que.pop();

        if(tmp[0]>4){
            vector<int> next(tmp);
            next[0]=tmp[0]-4;
            swap(next[tmp[0]],next[tmp[0]-4]);
            if(depth.count(next)==0){
                depth[next]=depth[tmp]+1;
                que.push(next);
            }
        }
        if(tmp[0]<5){
            vector<int> next(tmp);
            next[0]=tmp[0]+4;
            swap(next[tmp[0]],next[tmp[0]+4]);
            if(depth.count(next)==0){
                depth[next]=depth[tmp]+1;
                que.push(next);
            }
        }
        if(tmp[0]!=4&&tmp[0]!=8){
            vector<int> next(tmp);
            next[0]=tmp[0]+1;
            swap(next[tmp[0]],next[tmp[0]+1]);
            if(depth.count(next)==0){
                depth[next]=depth[tmp]+1;
                que.push(next);
            }
        }
        if(tmp[0]!=1&&tmp[0]!=5){
            vector<int> next(tmp);
            next[0]=tmp[0]-1;
            swap(next[tmp[0]],next[tmp[0]-1]);
            if(depth.count(next)==0){
                depth[next]=depth[tmp]+1;
                que.push(next);
            }
        }
    }
    
    while(1){
        if(!(cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5]>>num[6]>>num[7])) break;
        vector<int> empty;
        swap(empty,input);
        for(int i=0;i<8;i++){
            if(num[i]==0) start=i;
        }
        input.push_back(start+1);
        for(int i=0;i<8;i++) input.push_back(num[i]);
        cout<<depth[input]<<endl;
    }
     
    
    
    return 0;
}