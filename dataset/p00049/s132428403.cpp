#include<iostream>
#include<string>
main(){std::string t;int i,n[4]={0,0,0,0};for(;std::cin>>t;){t=t.substr(t.find(",")+1);i=0;if(t=="B")i=1;if(t=="AB")i=2;if(t=="O")i=3;n[i]++;}for(i=0;i<4;i++)std::cout<<n[i]<<"\n";}