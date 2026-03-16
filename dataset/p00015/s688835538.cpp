#include <bits/stdc++.h>

using namespace std;

int main(){
        int N;
        cin>>N;
        for (int i = 0; i < N; i++) {
                string a,b,c,d;
                cin>>a;
                cin>>b;
                int x=max(a.length(),b.length());
                for (int j = 0; j < x-a.length()+1; j++) {
                        c+="0";
                }
                for (int j = 0; j < x-b.length()+1; j++) {
                        d+="0";
                }
                c+=a;
                d+=b;
                for (int j = 0; j < x+1; j++) {
                        c[j]+=d[j]-'0';
                }
                for (int j = x; j >= 0; j--) {
                        if(c[j]>'9'){
                                c[j]-=10;
                                c[j-1]++;
                        }
                }

                if(c[0]!='0'){
                        if(x>=80){
                                cout<<"overflow"<<endl;
                                continue;
                        }
                        cout<<c[0];
                }else{
                        if(x>=81){
                        cout<<"overflow"<<endl;
                        continue;}
                }
                for (int j = 1; j <= x; j++) {
                        cout<<c[j];
                }
                cout<<endl;
        }

}