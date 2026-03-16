#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int n;

    while(cin>>n,n){
        int id;
        ll p,q;
        vector<pair<int,ll>> v;

        for(int i=0;i<n;i++){
            cin >> id >> p >> q;

            for( auto &t:v ){
                if( t.first==id ){
                    t.second += p*q;
                    id=-1;
                    break;
                }
            }

            if(id!=-1){
                v.push_back(make_pair(id,p*q));
            }
        }

        bool flag=false;
        for( auto t:v ){
            if( t.second>=1000000 ){
                cout<<t.first<<endl;
                flag=true;
            }
        }

        if(!flag) cout<<"NA"<<endl;
    }

    return 0;
}