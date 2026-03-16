#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string s;
    while (cin>>s) {
        for (int i=0;i<s.size();i++) {
            char c=s.at(i);
            if (c=='@') {
                int count = s.at(i+1)-48;
                for (int j=0;j<count;j++) {
                    cout<<s.at(i+2);
                }
                i=i+2;
            } else {
                cout<<c;
            }
            if (i==s.size()-1) {
                cout<<endl;
            }
        }
    }
}
