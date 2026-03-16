#include<iostream>
using namespace std;
int main()
{
double a,mi=10000,ma=-1;
while(cin >> a){
mi=min(mi,a);
ma=max(ma,a);
}
cout << ma-mi << "\n";
return 0;
}