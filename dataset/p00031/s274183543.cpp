#include<iostream>
#include<vector>

using namespace std;
const int V[10] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
int n;

void solve(){
    vector<int> w;
    for(int i=0; i<10; i++){
        int f = n/V[i];
        if(f!=0){
            n -= V[i];
            w.push_back(V[i]);
        }
    }
    for(int i=w.size()-1; i>=0; i--){
        if(i==0){
            cout<< w[i];
        }else{
            cout<< w[i]<< " ";
        }

    }
    cout<<endl;
}
int main(){
    while(cin>>n){
        solve();
    }
    return 0;
}