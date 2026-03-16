#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n,a;
    while (cin>>n) {
        if (n==0) {
            break;
        } else {
            std::deque<int> deq(10,0);
            for (int i=0;i<n;i++) {
                cin>>a;
                deq[a]+=1;
            }
            for (int j=0;j<10;j++) {
                if (deq[j]==0) {
                    cout<<"-"<<endl;
                } else {
                    for (int k=0;k<deq[j];k++) {
                        cout<<"*";
                    }
                    cout<<endl;
                }
            }
        }
    }
}

