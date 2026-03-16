#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
using namespace std;
  
int main(){
    /*??£???????????????????????????
            int a[2];
            cin >> a[1] >> a[2];
            cout << "[+] " << a[1] + a[2] << endl;
            cout << "[-] " << a[1] - a[2] << endl;
            cout << "[*] " << a[1] * a[2] << endl;
            cout << "[/] " << a[1] / a[2] << endl;
    */

    int a,ans[2];
    while(cin >> a){
    if(a == 0){break;}
    int p[a][3];
    for(int i = 1;a >= i;i++){
        cin  >> p[i][0] >> p[i][1] >> p[i][2];
        if(i == 1){
            ans[0] = p[i][0];
            ans[1] = p[i][1] + p[i][2];            
        }       
        for(int ii = 1;i > ii;ii++){
            if(ans[1] < p[i][1] + p[i][2]){
                ans[0] = p[i][0];
                ans[1] = p[i][1] + p[i][2];
            }
        }
    }
    cout << ans[0] << " " <<  ans[1] << endl;

    }
}