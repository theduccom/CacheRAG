#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)

vector<int> a(5);

string solve(){
    sort(a.begin(), a.end());
    int pair = 0;
    rep(i,5)rep(j,i) if(a[i] == a[j]) pair++;
    bool straight = true;
    rep(i,4) if(a[i] + 1 != a[i+1]) straight = false;
    if(a[0]==1 &&
       a[1]==10 &&
       a[2]==11 &&
       a[3]==12 &&
       a[4]==13) return "straight";
    if(straight) return "straight";

    if(pair == 6) return "four card";
    else if(pair == 4) return "full house";
    else if(pair == 3) return "three card";
    else if(pair == 2) return "two pair";
    else if(pair == 1) return "one pair";
    else return "null";
}

int main(){
    while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
        cout << solve() << endl;
    }
}