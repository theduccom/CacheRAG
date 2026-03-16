#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int card[13];
int solve(){
    int m;
    vector<int> n;
    for(int i=0;i<13;i++){
        if(card[i]) n.push_back(card[i]);
    }
    for(int i=0;i<n.size();i++){
        for(int j=1;j<n.size()-i;j++){
            if(n[j-1] < n[j]) swap(n[j-1], n[j]);
        }
    }
    if(n[0] == 4){
        cout << "four card" << endl;
    }else if(n[0] == 3){
        if(n[1] == 2){
            cout << "full house" << endl;
        }else{
            cout << "three card" << endl;
        }
    }else if(n[0] == 2){
        if(n[1] == 2){
            cout << "two pair" << endl;
        }else{
            cout << "one pair" << endl;
        }
    }else{
        bool straight=false;
        for(int i=0;i<13-3;i++){
            if(card[i]&&card[i+1]&&card[i+2]&&card[i+3]&&card[(i+4)%13]){
                cout << "straight" << endl;
                straight=true;
                break;
            }
        }
        if(!straight){
            cout << "null" << endl;
        }
    }
}

int main(){
    char comma;
    int m;
    while(cin >> m){
        for(int i=0;i<13;i++){
            card[i] = 0;
        }
        m--;
        card[m]++;
        for(int i=0;i<4;i++){
            cin >> comma >> m;
            m--;
            card[m]++;
        }
        solve();
    }
}