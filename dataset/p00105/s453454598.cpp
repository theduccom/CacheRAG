#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    map<string,vector<int> > M;
    string str;
    while(cin>>str){
        int p;
        cin>>p;
        M[str].push_back(p);
    }
    map<string,vector<int> >::iterator it = M.begin();
    for(;it != M.end();it++){
        sort((*it).second.begin(),(*it).second.end());
        cout<<(*it).first<<endl;
        cout<<(*it).second[0];
        for(int i = 1;i < (*it).second.size();i++){
            cout<<" "<<(*it).second[i];
        }
        cout<<endl;
    }
    return 0;
}