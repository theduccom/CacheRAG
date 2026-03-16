#include<bits/stdc++.h>
using namespace std;
int w;
int main(){

while( cin >> w && (~w) ){
int res = 1150;
if( w > 10){
res += min(10,w-10) * 125;
}
if(w > 20){
res += min(10,w-20) * 140;
}
if(w > 30){
res += (w-30)*160;
}
cout << 4280-res << endl;
}




}