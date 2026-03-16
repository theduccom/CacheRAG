#include <iostream>
using namespace std;
int main() {
    while (1) {
        int n;
        cin>>n;
        if (n==0)break;
        int T[10]={0};
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            T[x]++;
        }
        for (int i=0; i<10; i++) {
            for (int j=0; j<T[i]; j++) {
                cout<<"*";
            }
            if (T[i]==0) {
                cout<<"-";
            }
            cout<<endl;
        }

    }
}