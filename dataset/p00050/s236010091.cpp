#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++){
        if(str.substr(i, 5)=="apple")
            str.replace(i,5,"peach");
        else if(str.substr(i,5)=="peach")
            str.replace(i,5,"apple");
    }
    cout<<str<<endl;
    return 0;
}
 