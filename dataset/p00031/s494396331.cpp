#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    while(cin>>x){
        bool first=true;
        for(int w=1; w<1024; w<<=1){
            if(w&x){
                if(!first) cout<<' ';
                else first=false;
                cout<<w;
            }
        }
        cout<<'\n';
    }
    return 0;
}