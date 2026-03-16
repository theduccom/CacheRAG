#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>


using namespace std;



int main(){
    int x;
    while(cin>>x){
        int count = 0 ;
        if(x==0)break;
        while(x>=5){
            x/=5;
            count+=x;
        }
        cout<<count<<endl;
    }
}