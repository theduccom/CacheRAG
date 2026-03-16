#include <iostream>
#include <map>
using namespace std;
map<int,long long> sl;
int order[4000];
int main()
{
    int n;
    while(1)
    {
        cin>>n;if(!n)return 0;
        int count=0;
        int od=0;
        sl.clear();
        for(int i=0;i<n;++i){
            int sn;
            long long t,v;
            cin>>sn>>t>>v;
            map<int,long long>::iterator it=sl.find(sn);
            if(it==sl.end()){
                order[od++]=sn;
                sl.insert(make_pair(sn,t*v));
            }
            else it->second+=t*v;
        }
        for(int i=0;i<od;++i){
            if(sl[order[i]]>=1000000){cout<<order[i]<<endl;++count;}
        }
        if(!count)cout<<"NA"<<endl;
    }
}