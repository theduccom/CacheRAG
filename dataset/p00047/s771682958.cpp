#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char a,b,c;
    int m[3]={0,1,2};
    while(cin>>a>>b>>c){
        swap(m[a-'A'],m[c-'A']);
    }
    for(int i=0;i<3;i++){
        if(m[i]==0){cout<<char('A'+i)<<endl;return 0;}
    }
}