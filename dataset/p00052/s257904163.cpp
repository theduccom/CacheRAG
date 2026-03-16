#include <iostream>
main(){int n,c,t,f,i,m;for(;;){std::cin>>n;if(!n){break;}c=t=f=0;for(i=1;i<=n;i++){m=i;while(m%2==0){t++;m/=2;}m=i;while(m%5==0){f++;m/=5;}}std::cout<<(t<f?t:f)<<"\n";}}