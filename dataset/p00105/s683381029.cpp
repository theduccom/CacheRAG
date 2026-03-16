#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<string,vector<int> >M;
    string str;
    int p;
    while(cin>>str>>p){
        M[str].push_back(p);
    }
    map<string,vector<int> >::iterator ite=M.begin();
    for(;ite!=M.end();ite++){
        sort((ite->second).begin(),(ite->second).end());
    }
    for(ite=M.begin();ite!=M.end();ite++){
        cout<<ite->first<<endl;
        bool f=false;
        for(int i=0;i<(ite->second).size();i++){
            if(f)cout<<" ";
            cout<<(ite->second)[i];
            f=true;
        }
        cout<<endl;
    }
}