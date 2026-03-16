#include <iostream>
#include <map>
using namespace std;
int main()
{
    while(1)
    {
        int n,p,d1,d2;
        map<int,int> pat;
        cin>>n;if(!n)return 0;
        for(int i=0;i<n;++i){
            cin>>p>>d1>>d2;
            pat.insert(make_pair(d1+d2,p));
        }
        map<int,int>::iterator it=pat.end();
        it--;
        cout<<(*it).second<<" "<<(*it).first<<endl;
    }
    return 0;
}