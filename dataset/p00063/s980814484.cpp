#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s;
    int a=0;
    while(cin>>s){
        if(s==string(s.rbegin(),s.rend()))a++;
    }
    cout<<a<<endl;
    return 0;
}