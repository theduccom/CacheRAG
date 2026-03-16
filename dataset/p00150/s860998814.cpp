#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int>prime;
int main(){
    int ask;
    prime.push_back(1);
    prime.push_back(2);
    for(int i=3;i<10001;i++){
        int t=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                t=0;
                break;
            }
        }
        
        if(t)
            prime.push_back(i);
    }
    while(true){
        cin>>ask;
        if(ask==0)
            break;
        for(int i=ask;i>1;i--){
            if(find(prime.begin(),prime.end(),i)!=prime.end()&&find(prime.begin(),prime.end(),i-2)!=prime.end()){
                cout<<i-2<<" "<<i<<endl;
                break;
            }
        }
    }
    return 0;
}