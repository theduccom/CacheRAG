#include<iostream>
#include<map>
#include <vector>
using namespace std;

int main(){
    int n,i;
    while(cin>>n,n){
        map<int,long long>m;
        vector<int>vec;
        long long p,q,s=0;
        while(n--){
            cin>>i>>p>>q;
            if(!m[i])vec.push_back(i);
            m[i]+=p*q;
        }
//        for (map<int,long long>::iterator it=m.begin(); it!=m.end(); ++it){
//            cout<<it->first<<endl;
//            if(it->second>=1000000){
//                s=1;
//                cout<<it->first<<endl;
//            }
//        }
        for (int i=0;i<vec.size();i++){
            if(m.find(vec[i])->second>=1000000){
                s=1;
                cout<<m.find(vec[i])->first<<endl;
            }
        }
        if(!s)cout<<"NA"<<endl;
    }
}