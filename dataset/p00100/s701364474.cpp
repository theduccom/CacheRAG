#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        map<int, long long> info;
        map<int, long long>::iterator it;
        vector<long long> name;
        rep(i,n){
            long long a, b, c;
            cin >> a >> b >> c;
            if(!info[a])name.push_back(a);
            info[a] += b * c;
        }
        bool c = true;
        rep(i, name.size()){
            if(info[name[i]]>= 1000000){
                cout << name[i] << endl;
                c = false;
            }
        }
        if(c) cout << "NA" << endl;
    }
}