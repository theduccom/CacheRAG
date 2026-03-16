#include<iostream>
main(){for(;;){int n=0,s=0;std::cin>>n;if(!n)break;for(;n>0;s+=n)n/=5;std::cout<<s<<"\n";}}