#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void){
    // Here your code !
    string a;
    int n,x;
    cin>>n;
    while(n--){
        cin>>a;
        sort(a.begin(),a.end());
        x=atoi(a.c_str());
        reverse(a.begin(),a.end());
        cout<<atoi(a.c_str())-x<<endl;
    }
        
    
    
}