#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z')    s[i]-=32;
        }
        cout << s << endl;
    }
    return 0;
}

