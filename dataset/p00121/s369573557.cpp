#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#define pr(x) cout<<#x<<" "<<x;
#define pl(x) cout<<#x<<" "<<x<<endl;
#include<math.h>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;
map <string, int> dp;
int direction[4] = { 1, -1, 4, -4 };
void bfs(){
    queue <string >que;
    que.push("01234567");
    dp["01234567"] = 0;
    while(que.size()){
        string now = que.front();
        que.pop();
        int index = 0;
        for(int i = 0;i<8;i++){
            if(now[i] =='0'){
                index = i;
                break;
            }
        }
        for(int i =0;i<4;i++){
            int n = index + direction[i];
            if(n>=0&&n<8&&!(index==3&&i==0)&&!(index==4&&i==1)){
                string next = now;
                swap(next[n],next[index]);
                if(dp.find(next)==dp.end()){
                    dp[next] = dp[now]+1;
                    que.push(next);
                }
            }
        }
    }

}



int main(){
    bfs();
	string line = "00000000";
	int base[8];
	while (cin>>base[0]>>base[1]>>base[2]>>base[3]>>base[4]>>base[5]>>base[6]>>base[7])
	{
		for(int i=0;i<8;i++){
            line[i] = base[i]+'0';
		}

		cout << dp[line] << endl;
	}

	return 0;


}