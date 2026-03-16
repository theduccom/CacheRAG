#include<iostream>
#include<stdio.h>
#include<math.h>
#include    <iomanip>
#include    <map>
#include    <set>
#include    <deque>
#include    <vector>
#include    <stack>
using namespace std;
template <class X>
void prr(X test) {
    for(auto it:test){
        cout<<it;
    }
    cout<<endl;
}
int main(){
    map<string, set<int>> ma;
    string a;
    int aa;
    vector<int> b;
    while((cin>>a >>aa)&&(a!="0")){
        ma[a].insert(aa);
    }
    
    for(auto it:ma){
        cout<<it.first<<endl;
        for (set<int>::iterator itt=it.second.begin();itt!=it.second.end();itt++) {
            cout<<*itt;
            if (itt!=it.second.end().operator--()) {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}