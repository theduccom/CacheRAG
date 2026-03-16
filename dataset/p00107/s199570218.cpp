#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int d,w,h;
        cin >> d >> w >> h;
        if(d==0) break;

        int diag = min(d*d +w*w, min(w*w +h*h, h*h +d*d));
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int r;
            cin >> r;
            if(diag < 4*r*r){
                cout << "OK" << endl;
            }else{
                cout << "NA" << endl;
            }
        }
    }
    return 0;
}

