#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

#define EPS 1e-7

using namespace std;
int main(){
    vector<int> in(3);
    while(cin >> in[0] >> in[1] >> in[2]){
        sort(in.begin(),in.end());
        if(in[2] == 0)break;
        int n;
        cin >> n;
        double l = hypot(in[1], in[0]);
        for(int i = 0; i < n; i++){
            double r;
            cin >> r;
            if(l + EPS < r*2)cout << "OK" << endl;
            else cout << "NA" << endl;
        }
    }
}

