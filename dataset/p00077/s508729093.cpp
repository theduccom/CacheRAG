#include <iostream>
#include <string>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)

int main() {
    string s;
    while(cin>>s){
        REP(i,s.length()){
            if (s[i]!='@'){
                cout<<s[i];
            }else{
                i++;
                int x=s[i]-'0';
                i++;
                while(x--)cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}