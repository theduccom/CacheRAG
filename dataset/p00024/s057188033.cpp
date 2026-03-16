#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double v;
    while(cin>>v){
        double y = v*v/19.6;

        int i=1;
        for(;;){
            if(y<5*i-5) break;
            i++;
        }
        cout << i << endl;
    }


return 0;
}