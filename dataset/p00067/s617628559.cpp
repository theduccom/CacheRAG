//C++11

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)

const int LEN = 12;
bool mat[LEN][LEN];
int visit[LEN][LEN];

void search(int i,int j,int orig)
{
    if(i<0||j<0||LEN<=i||LEN<=j) return;
    if(!mat[i][j]) return;
    if(visit[i][j]>=0) return;
    visit[i][j] = orig;
    search(i+1,j,orig);
    search(i-1,j,orig);
    search(i,j+1,orig);
    search(i,j-1,orig);
}

int solve(void)
{
    //init
    REP(i,LEN) REP(j,LEN) visit[i][j] = -1;
    //search
    REP(i,LEN) REP(j,LEN) search(i,j,i+j*LEN);
    //count
    vector <int> cnt(LEN*LEN,0);
    REP(i,LEN) REP(j,LEN) cnt[i+j*LEN] = visit[i][j];
    sort(cnt.begin(), cnt.end());
    cnt.erase(unique(cnt.begin(), cnt.end()), cnt.end());
    cnt.erase(remove(cnt.begin(), cnt.end(), -1), cnt.end());
    return cnt.size();
}

int main(void)
{
    while(true){
        //read data
        string s;
        REP(i,LEN){
            getline(cin,s);
            REP(j,LEN){
                mat[i][j] = (s[j]=='0') ? false : true;
            }
        }
        //solve and print
        int res = solve();
        cout << res << endl;
        //end of input
        if(!getline(cin,s)) break;
    }
    return 0;
}