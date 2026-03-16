#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int l[10];
        if(!(cin>>l[0])) break;
        cin.ignore();
        for(int i=1; i<10; i++){
            cin>>l[i];
            cin.ignore();
        }
        int sum=0;
        for(int i=0; i<10; i++) sum+=l[i];
        int v1, v2;
        cin>>v1;
        cin.ignore();
        cin>>v2;
        double point=(double)sum*v1/(v1+v2);
        int pt=ceil(point);
        int ll=0;
        for(int i=0; i<10; i++){
            ll+=l[i];
            if(pt<=ll){
                cout<<i+1<<'\n';
                break;  
            } 
        }
    }
    return 0;
}