#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    bool first=true;
    while(true){
        cin>>a>>b;
        if(a==0&&b==0)break;
        else if(first)first=false;
        else cout<<endl;
        bool f=true;
        for (int i = a; i <= b; ++i) {
            if(i%4==0){
                if(i%100==0){
                    if(i%400==0){
                        cout<<i<<endl;
                        f=false;
                    }
                }
                else {
                    cout<<i<<endl;
                    f=false;
                }
            }
        }
        if(f)cout<<"NA"<<endl;
    }

    return 0;
}
