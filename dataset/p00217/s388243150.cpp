#include <iostream>

using namespace std;

int main(void){
int n, p, d1, d2;
int ans1,ans2;
while(1){
cin >> n;
if(n == 0){
break;
}
ans1 = -1, ans2 = -1;
for(int i = 0;i < n;i++){
cin >> p >> d1 >> d2;
if(ans2 < d1 + d2){
ans1 = p;
ans2 = d1 + d2;
}
}
cout << ans1 << " " << ans2 << endl;
}
return 0;
}