#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int a,b,c,i,j;
    char t;
    while(cin>>a>>t>>b>>t>>c){
        if(c*c==a*a+b*b) i++;
         else if(a==b) j++;
    }
    cout<<i<<endl<<j<<endl;
}