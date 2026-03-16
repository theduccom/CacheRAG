#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<utility>
#include<sstream>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int maxn = 1005;
map<string,int>mp;
struct Node
{
    string s;
    int t,pos;
    Node(string s = "",int t = 0,int pos = 0):s(s),t(t),pos(pos){}
};
void init()
{
    queue<Node>p;
    p.push(Node("01234567",0,0));
    string ttt = "01234567";
    mp[ttt] = 0;
    while(p.size())
    {
        Node temp = p.front();
        p.pop();
        string s;
        int pos = temp.pos;
        if(pos != 3&&pos != 7)
        {
            s = temp.s;
            swap(s[pos],s[pos + 1]);
            if(!mp.count(s))
            {
                mp[s] = temp.t + 1;
                p.push(Node(s,mp[s],pos + 1));
            }
        }
        if(pos != 0&&pos != 4)
        {
            s = temp.s;
            swap(s[pos],s[pos - 1]);
            if(!mp.count(s))
            {
                mp[s] = temp.t + 1;
                p.push(Node(s,mp[s],pos - 1));
            }
        }
        if(pos < 4)
        {
            s = temp.s;
            swap(s[pos],s[pos + 4]);
            if(!mp.count(s))
            {
                mp[s] = temp.t + 1;
                p.push(Node(s,mp[s],pos + 4));
            }
        }
        if(pos >= 4)
        {
            s = temp.s;
            swap(s[pos],s[pos - 4]);
            if(!mp.count(s))
            {
                mp[s] = temp.t + 1;
                p.push(Node(s,mp[s],pos - 4));
            }
        }
    }
}
int main()
{
	#ifdef LOCAL
	freopen("C:\\Users\\巍巍\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\巍巍\\Desktop\\out.txt","w",stdout);
	#endif // LOCAL
	init();
	string in;
	while(getline(cin,in))
    {
        stringstream ss(in);
        string ans = "";
        for(int i = 1;i <= 8;i++)
        {
            int x;
            ss >> x;
            char c = x + 48;
            ans += c;
        }
        printf("%d\n",mp[ans]);
    }
	return 0;
}