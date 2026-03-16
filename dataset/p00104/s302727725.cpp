#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string fie[200]={};


int main(){
    int h,w;
    while(cin>>h>>w){
        if(w==0 && h==0)break;

        rep(i,h){
            cin>>fie[i];
        }

        int y=0,x=0;

        int c=0;
        while(c<1000000){
            c++;
            char ch = fie[y][x];
            if(ch=='>'){
                x++;
            }else if(ch=='<'){
                x--;
            }else if(ch=='^'){
                y--;
            }else if(ch=='v'){
                y++;
            }else break;
        }
        if(c==1000000)cout<<"LOOP"<<endl;
        else cout<<x<<" "<<y<<endl;
    }
}