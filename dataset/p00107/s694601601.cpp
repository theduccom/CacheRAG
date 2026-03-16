#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double tmp[3],a,b,mini,n;
    while(true){
        for(int i=0;i<3;i++){
            cin >> tmp[i];
            if(tmp[2] == 0 && tmp[1] == 0 && tmp[2] == 0) return 0;
        }
        sort(tmp,tmp+3); a = tmp[0]; b = tmp[1];
        mini = sqrt(a*a+b*b);
        cin >> n;
        while(n--){
            cin >> a;
            cout << ((a*2 > mini)? "OK" : "NA") << endl;
        }
    }
}