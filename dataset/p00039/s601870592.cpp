#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

char num[] = {'I','V','X','L','C','D','M'};
int eqiv[] = {1,5,10,50,100,500,1000};

int id(char el){
	for(int x=0;x<7;++x)
		if(num[x] == el)return x;
	return -1;
}

int main(){	
	string line;
	while(cin>>line){
		int num = 0;
		for(int x=0;x<line.size();++x){
			int c = 1;
			while(x<line.size()+1 && line[x] == line[x+1]){
				c++;x++;
			}
			if(id(line[x])<id(line[x+1])){
				num -= c*eqiv[id(line[x])];
			}else{
				num += c*eqiv[id(line[x])];
			}
			if(line[x]==line[x+1])++x;
		}
		cout<<num<<endl;	
	}
	return 0;
}		