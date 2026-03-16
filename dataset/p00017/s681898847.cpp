#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
string a,b;
char c[81];
int main(){
    while(getline(cin,a)){
        int flg=0;
        for(;;){
            if(flg==1)break;
            for(int i=0;i<26;i++){
                for(int j=0;j<a.size();j++){
                    if(a[j]>='a'&&a[j]<='z'){
                        if(a[j]-1>='a'){
                            a[j]-=1;
                        }else{
                            a[j]+=25;
                        }
                    }
                }
                for(int j=0;j<a.size()-3;j++){
                    b=a.substr(j,3);
                    if(b=="the")flg=1;
                    b=a.substr(j,4);
                    if(b=="that"||b=="this")flg=1;
                    if(flg==1)break;
                }
                if(flg==1)break;
            }
        }
    cout<<a<<endl;
    }
return 0;
}