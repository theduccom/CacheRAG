#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef pair<int,int>pii;
int main(){
    int h,w,t,n;
    while(cin>>h>>w>>t,h||w||t){
        cin>>n;
        while(n--){
            int r;
            cin>>r;
            if(sqrt(w*w+t*t)<r*2)cout<<"OK"<<endl;
            else cout<<"NA"<<endl;
        }
    }

}