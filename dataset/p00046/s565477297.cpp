#include <iostream>
#include <algorithm>

using namespace std;

int main(){
double h[10000];
int i=0;
while(cin >> h[i]) i++;
sort(h,h+i);
cout << h[i-1] - h[0] << endl;
return 0;
}