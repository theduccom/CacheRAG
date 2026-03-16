#include <iostream>
using namespace std;
#define LAST 4280
int main(){
    int w;
    while(cin >> w){
        if (w==-1)
            break;
        if(w<=10)
            cout << LAST-1150 << endl;
        if(10 <w && w<=20)
            cout << LAST-(1150+(w-10)*125) << endl;
        if(20<w && w<=30)
            cout << LAST-(2400+(w-20)*140) << endl;
        if(30<w)
            cout << LAST-(3800+(w-30)*160) << endl;
    }
}