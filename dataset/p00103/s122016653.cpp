#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n,base=0,cou=0,out=0;
    char ive[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cou=0,out=0,base=0;
        for(;;){
            cin>>ive;
            if(ive[0]=='H'&&ive[1]=='I')base++;
            if(ive[0]=='H'&&ive[1]=='O'){
                cou+=base+1;
                base=0;
            }
            if(ive[0]=='O')out++;
            if(base==4){
                base=3;
                cou++;
            }
            if(out==3)break;
        }
        cout<<cou<<endl;
    }
}