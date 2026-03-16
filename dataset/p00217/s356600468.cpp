#include <iostream>
using namespace std;
int main(void){
    int n;
    while(true){
        cin >> n;
        if(n==0)break;
        int maxp=0,maxv=-1,p,a,b;
        for(int i=0;i<n;i++){
            cin >> p >> a >> b;
            if(maxv < (a+b)){
                maxv = a+b;
                maxp = p;
            }
        }
        cout << maxp << " " << maxv << endl;
    }
    return 0;
}
