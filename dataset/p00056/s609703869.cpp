#include <iostream>
#include <cmath>
using namespace std;
int prime(int n);
int main(){
    int a[50000];
    for (int j=0;j<50000;j++)
        a[j]=prime(j);

    int b;
    Loop:
    while(true){
    int count =0;
    cin >> b;
    if (b==0)
        break;
    for(int x=2;x<b/2+1;x++){
        if(a[x]!=0){
            if(x<=b-x){
                if(a[x]+a[b-x]==b)
                    count++;
            }
        }
        }
    cout << count << endl;
    }

    }

int prime(int n){
    if(n==1)
        return 0;
    if (n==2 || n==3)
        return n;
    if (n%2==0)
        return 0;
    for(int i=3;i<sqrt(n)+2;i++){
        if (n%i==0)
            return 0;
    }
    return n;
}