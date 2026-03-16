#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string ins,rev;
    int ans=0;
    while(cin>>ins){
        rev=ins;
        reverse(rev.begin(),rev.end());
        if(ins==rev)ans++;
    }
    cout<<ans<<endl;
}