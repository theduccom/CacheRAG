//aoj 0121 Seven Puzzle
//七数?，字符串????理没什?好?的
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<string>
#include<map>
using namespace std;

string S;
map<string,int> dp;

int dir[4] = {-1,1,-4,4};
int a[10];

bool judge(int x1, int x2)
{
    if(x2==0 && (x1==0 || x1==4)) return false;
    if(x2==1 && (x1==3 || x1==7)) return false;
    if(x2==2 && x1<4) return false;
    if(x2==3 && x1>3) return false;
    return true;
}

void bfs()
{
    int p, ps;
    int shit;
    
    S = "01234567";
    //S[8] = 0;
    string s;
    queue<string> q;
    dp[S] = 0;
    q.push(S);
    while(!q.empty())
    {
        s = q.front(); q.pop();
        shit = dp[s];
        //printf("%s %d\n", s.c_str(), dp[s]);
        for(int i=0; i<8; ++i)
        {
            if(s[i]=='0') {p = i; break;}
        }
        for(int i=0; i<4; ++i)
        {
            if(judge(p,i))
            {
                ps = p+dir[i];
                swap(s[p],s[ps]);
                if(!dp.count(s)) {dp[s] = shit+1; q.push(s);}
                swap(s[p],s[ps]);
            }
        }
    }
}

void solve()
{
    printf("%d\n", dp[S]);
}

int main()
{
    bfs();
    while(scanf("%d", &a[0])!=EOF)
    {
        for(int i=1; i<8; ++i) scanf("%d", &a[i]);
        for(int i=0; i<8; ++i)
        {
            S[i] = a[i]-0+'0';
        }
        //S[8] = 0;
        solve();
    }
    return 0;
}