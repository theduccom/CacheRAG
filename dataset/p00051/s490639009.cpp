#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vector<int> a;
        for(int j=0;j<s.size();j++)a.push_back(s[j]-'0');
        sort(a.begin(),a.end());
        int mi=0,ma=0;
        for(int j=0;j<s.size();j++){
            mi*=10;
            ma*=10;
            ma+=a[s.size()-1-j];
            mi+=a[j];
        }
        cout<<ma-mi<<endl;
    }
    
    return 0;
}
