#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

int main(){
    string s;
    getline(cin, s);
    rep(i, s.size()-4){
        if(s.substr(i, 5) == "apple"){
            s.replace(i, 5, "peach");
        }else if(s.substr(i, 5) == "peach"){
            s.replace(i, 5, "apple");
        }
    }
    cout << s << endl;
    return 0;
}
