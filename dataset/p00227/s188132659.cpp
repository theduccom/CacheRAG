#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
        cin>>n>>m;if(!n)return 0;
        int v[1000];
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        sort(v,v+n);
        reverse(v,v+n);
        int res=0;
        for(int i=0;i<n;){
            if(n-i>=m){
                for(int j=0;j<m-1;++j){
                    res+=v[i];
                    i++;
                }
                i++;
            }else{
                res+=v[i];
                i++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}