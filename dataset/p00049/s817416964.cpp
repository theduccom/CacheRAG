#include <bits/stdc++.h>
using namespace std;

int main(){
    int ti;char y;string hoge;
    map<string,int>gotiusa;
    while(cin>>ti>>y>>hoge)gotiusa[hoge]++;
    cout<<gotiusa["A"]<<endl;
    cout<<gotiusa["B"]<<endl;
    cout<<gotiusa["AB"]<<endl;
    cout<<gotiusa["O"]<<endl;
}