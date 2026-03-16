#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int m=0,n=0,c=0,i,j;
    char a;
    while(cin>>i>>a>>j){
        m+=(i*j);
        n+=j;
        c++;
    }
    double am=1.0*n/c;
    if(am*10-int(am/10)>4)am=am+1;
    cout<<m<<endl<<int(am)<<endl;
}