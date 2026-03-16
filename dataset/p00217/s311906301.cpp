#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n==0)
            break;
        int a[n][2];
        int b; int c;
        for(int i=0;i<n;i++){
            cin >> a[i][0] >> b >> c;
            a[i][1]=b+c;
        }
        int max = a[0][1];
        int kouho =a[0][0];
        for(int i=0;i<n;i++){
            if(a[i][1] > max){
                max = a[i][1];
                kouho = a[i][0];
            }
        }
        cout << kouho << " " << max << endl;
    }
}