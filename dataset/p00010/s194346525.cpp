#include<iostream>
#include<cmath>
int main(){float a,b,c,d,e,f,g,h,i,j,k,l,n,s;for(std::cin>>n;n--;)std::cin>>g>>h>>i>>j>>k>>l,a=i-k,d=j-l,b=k-g,e=l-h,c=g-i,f=h-j,a=sqrt(d=d*d+a*a),b=sqrt(e=e*e+b*b),c=sqrt(f=f*f+c*c),s=(a+b+c)/2,s=sqrt(s*(s-a)*(s-b)*(s-c)),s*=s*16,a=d*(e+f-d),b=e*(f+d-e),c=f*(d+e-f),g-=d=(a*g+b*i+c*k)/s,h-=e=(a*h+b*j+c*l)/s,printf("%.3f %.3f %.3f\n",d,e,sqrt(g*g+h*h));}