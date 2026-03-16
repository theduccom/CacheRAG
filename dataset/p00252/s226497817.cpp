#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    cin >>a>>b>>c;
    if(a+b==1||a+b+c==0){
        cout <<"Close";
    }
    else {
        cout <<"Open";
    }
    cout <<endl;
}
