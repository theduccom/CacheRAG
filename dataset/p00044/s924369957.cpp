#include<iostream>
#include<algorithm>
using namespace std;

bool prime[60000];

void func(){
    fill(prime,prime+60000,1);
    prime[0] = prime[1] = 0;
    for(int i=2;i*i<60000;i++){
        if(prime[i]){
            for(int j=i*2;j<60000;j+=i){
                prime[j]=0;
            }
        }
    }
}

int main() {
    func();
    int n,i=0;
    while(cin>>n){
        for(i=n-1;prime[i]!=1;i--){}
        cout << i << ' ';
        for(i=n+1;prime[i]!=1;i++){}
        cout << i << endl;
    }
	return 0;
}