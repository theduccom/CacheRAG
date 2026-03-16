#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int ix=0;ix<n;ix++){
        cin>>s;
        string big,sma;
        big=sma=s;
        sort(sma.begin(),sma.end(),less<char>());
        sort(big.begin(),big.end(),greater<char>());
        int bi=0,sm=0;
        stringstream b,s;
        b<<big;
        s<<sma;
        b>>bi;
        s>>sm;
        cout<<bi-sm<<endl;
    }
}