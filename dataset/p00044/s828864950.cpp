#include <iostream>
#include <stack>
using namespace std;

int* primeNumberList(int n){
    int *list = new int[n];
    
    for(int i=2;i<=n;++i){
        list[i-1]=1;
    }
    
    for(int i=2;i<=n;++i){
        if(list[i-1] == 1){
            for(int j=2*i;j<=n;j+=i){
                list[j-1] = 0;
            }
        }
    }
    
    return list;
}
int main(){
    int max = 60000;
    int *pl = primeNumberList(max);
    int n,plowermax,pgreatermin;
    
    while(cin>>n){
        for(int i=n-1;i>=1;--i){
            if(pl[i-1] == 1){
                cout << i << " ";
                break;
            }
        }
        for(int i=n+1;i<=60000;++i){
            if(pl[i-1] == 1){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}