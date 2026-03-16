#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n;
char a[9];
cin >> n;
while(n--){
scanf("%s",a);
sort(a,a+8);
cout << 9999999*(a[7]-a[0]) + 999990*(a[6] - a[1]) + 99900 * (a[5] - a[2]) + 9000 * (a[4] - a[3]) << endl;
}

return 0;
}