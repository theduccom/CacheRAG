#include <iostream>
int a,b,c,n,r;int main(){while(std::cin>>a>>b>>c,a|b|c){a*=a;b*=b;c*=c;std::cin>>n;while(n--)std::cin>>r,r*=4*r,puts(a+b<r|b+c<r|c+a<r?"OK":"NA");}}