#include <bits/stdc++.h>
using namespace std;
int main(void) {
    std::deque<string> deq;
    string s;
    while (cin>>s) {
        deq.emplace_back(s);
    }
    for (int i=0;i<deq.size();i++) {
        if (deq[i].find("peach")!=string::npos) {
            deq[i].replace(deq[i].find("peach"),5,"apple");
            cout<<deq[i];
        } else if (deq[i].find("apple")!=string::npos) {
            deq[i].replace(deq[i].find("apple"),5,"peach");
            cout<<deq[i];
        } else {
            cout<<deq[i];
        }
        if (i==deq.size()-1) {
            cout<<endl;
        } else {
            cout<<" ";
        }
    }
}
