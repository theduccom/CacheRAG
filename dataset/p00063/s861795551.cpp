#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    int ans = 0;
    string s;
    
    while( cin >> s ){
    	string s_ = s;
    	reverse(s.begin(), s.end());
        if( s == s_ ) ans++;
    }
    cout << ans << endl;
}