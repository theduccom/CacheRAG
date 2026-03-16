#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(void){
	string str;
	map<string, int> num;
	num.insert( map<string,int>::value_type("I",1));
	num.insert( map<string,int>::value_type("II",2));
	num.insert( map<string,int>::value_type("III",3));
	num.insert( map<string,int>::value_type("IV",4));
	num.insert( map<string,int>::value_type("V",5));
	num.insert( map<string,int>::value_type("VI",6));
	num.insert( map<string,int>::value_type("VII",7));
	num.insert( map<string,int>::value_type("VIII",8));
	num.insert( map<string,int>::value_type("IX",9));
	num.insert( map<string,int>::value_type("X",10));
	num.insert( map<string,int>::value_type("XI",11));
	num.insert( map<string,int>::value_type("XII",12));
	num.insert( map<string,int>::value_type("XIII",13));
	num.insert( map<string,int>::value_type("XIV",14));
	num.insert( map<string,int>::value_type("XV",15));
	num.insert( map<string,int>::value_type("XVI",16));
	num.insert( map<string,int>::value_type("XVII",17));
	num.insert( map<string,int>::value_type("XVIII",18));
	num.insert( map<string,int>::value_type("XIX",19));
	num.insert( map<string,int>::value_type("XX",20));
	num.insert( map<string,int>::value_type("XXX",30));
	num.insert( map<string,int>::value_type("XL",40));
	num.insert( map<string,int>::value_type("L",50));
	num.insert( map<string,int>::value_type("LX",60));
	num.insert( map<string,int>::value_type("LXX",70));
	num.insert( map<string,int>::value_type("LXXX",80));
	num.insert( map<string,int>::value_type("XC",90));
	num.insert( map<string,int>::value_type("C",100));
	num.insert( map<string,int>::value_type("CD",400));
	num.insert( map<string,int>::value_type("D",500));
	num.insert( map<string,int>::value_type("CM",900));
	num.insert( map<string,int>::value_type("M",1000));
	while(cin >> str){
		int ans=0;
		string s;
		for(int i=0;i<str.size();i++){
			string ss=s;
			s+=str[i];
			if(num[s]==0){
				if(num[ss]>0){
					ans+=num[ss];
					s=str[i];
				}
			}
			if(i==str.size()-1){
				ans+=num[s];
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}