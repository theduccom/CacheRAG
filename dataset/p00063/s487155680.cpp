#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

bool ok(string const& s){
    string t = s;
    reverse(t.begin(),t.end());
    return t == s;
}
int main(){
    string s;
    int ans=0;
    while(cin>>s)ans+=ok(s);
    cout << ans << endl;
}