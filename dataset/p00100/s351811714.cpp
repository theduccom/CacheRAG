#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
    
    while(cin>>n && n){
        
        map<int,int> mp;
        vector<int> v;
        
        for(int i=0; i<n; i++){
            int e,p,q;
            cin>>e>>p>>q;
            if(!mp[e])
                v.push_back(e);
            
            mp[e]+=p*q;
            
        }
        
        bool flg=false;
        
        for(int i=0; i<v.size(); i++){
            if(mp[v[i]]>=1000000){
                flg=true;
                cout<<v[i]<<endl;
            }
        }
            if(!flg){
                cout<<"NA"<<endl;
            }
        
    }
    
    return 0;
}