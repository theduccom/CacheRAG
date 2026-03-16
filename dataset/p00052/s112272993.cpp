#include <iostream>
using namespace std;
int main(){
    int x,count=0;
    while(cin>>x){
    if(x==0)break;
    count+=x/5;
    count+=x/25;
    count+=x/125;
    count+=x/625;
    count+=x/3125;
    count+=x/15625;
    cout<<count<<endl;
    count=0;
    }
}