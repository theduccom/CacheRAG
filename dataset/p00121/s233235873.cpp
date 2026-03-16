#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <stack>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <functional>
#define inf 0x3f3f3f3f
#define inff -30000000
using namespace std;
typedef long long ll;
const int MAXN=1e5+10;
const int MAX=20+10;
typedef pair<string,int>P;
map<string,int>save;
string s[MAX];
int d[5]={-1,1,-4,4};
void bfs(){
    queue<P>q;
    q.push(P("01234567",0));
    save["01234567"]=0;
    while(!q.empty()){
        P t=q.front();
        q.pop();
        int flag=t.second;
        for(int i=0;i<4;i++){
            if((flag==3&&d[i]==1||(flag==4&&d[i]==-1))||flag+d[i]<0||flag+d[i]>=8)
                continue;
            string str=t.first;
            swap(str[flag],str[flag+d[i]]);
            if(save.find(str)==save.end()){
                save[str]=save[t.first]+1;
                q.push(P(str,flag+d[i]));
            }
        }
    }
}
int main(){
    #ifdef SIYU
    freopen("in.txt","r",stdin);
    #endif // SIYU
    bfs();
    int a[10];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]){
        string siyu;
        char ch[10];
        for(int i=0;i<8;i++){
            ch[i]='0'+a[i];
        }
        ch[8]='\0';
        siyu=ch;
        cout<<save[siyu]<<endl;

    }
    return 0;
}