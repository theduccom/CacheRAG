#include <iostream>
using namespace std;
int main(){
double t,v,y;
while(cin >> v,!cin.eof()){
t=v/9.8,y=4.9*t*t;
cout << (int)y/5+2 << endl;
}
return 0;
}