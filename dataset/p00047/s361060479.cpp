#include <iostream>
using namespace std;
int main(){int a[3]={1,0,0},b;char c[3];
while(std::cin>>c){b=a[(c[0]-'A')];a[c[0]-'A']=a[(c[2]-'A')];a[(c[2]-'A')]=b;}
for(b=0;b<3;b++)if(a[b])std::cout<<(char)('A'+b)<<"\n";}