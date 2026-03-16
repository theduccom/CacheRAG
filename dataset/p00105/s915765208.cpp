#include <bits/stdc++.h>
using namespace std;
int main(void){
    pair<string, int> t[1010];
    int i;
    for(i=0; cin >> t[i].first >> t[i].second; i++);
    sort(t, t+i);
    cout << t[0].first << "\n";
    cout << t[0].second;
    for(int j=1; j<i; j++){
        if(t[j-1].first==t[j].first){
            cout << " " << t[j].second;
        }
        else{
            cout << "\n";
            cout << t[j].first << "\n";
            cout << t[j].second;
        }
    }
    cout << "\n";
}

