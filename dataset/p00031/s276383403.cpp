#include<iostream>
#include<string>
#include<cmath>
#include<bitset>
int main(){
    int t;
    while(std::cin>>t){
    std::bitset<11> value(t);
    std::string s=value.to_string();
    for(int i=0;i<s.size();i++){if(s[0]=='0') s.erase(s.begin()); else break;}
    int num=std::stoi(s);
        for(int i=0;i<s.size();i++){if(num%10){std::cout<<pow(2,(double)(i)); if(pow(2,i)*2<t)std::cout<<" ";}num/=10;}
    std::cout<<std::endl;
    }
}