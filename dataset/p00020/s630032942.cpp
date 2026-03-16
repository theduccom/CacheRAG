#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <fstream>

using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define dbg(x) cout << #x"="<< (x) << endl
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back(a) 
#define in(x) cin >> x;
#define all(x) (x).begin(), (x).end()
#define INF 2147483600
#define fi first
#define se second
using namespace std;

string shift_str(string str)
{
    int ascii;
    string ret;
     
    for (int i=0; i<str.length(); i++)
    {
        ascii = str[i];   
        if (!('a' <= ascii && ascii <= 'z'))
        {
            ret += ascii;
        } else {
        	ret += ((ascii - 'a') + 'A');
        }
         
    }   
    return ret;
}
//?°????????????§?????????
 
int main()
{
    string str;
    getline(cin,str);	//???????????\????????§????????????.
    cout<<shift_str(str)<<endl;
    return 0;
}