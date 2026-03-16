#include<bits//stdc++.h>
using namespace std;

int main(){
int n;
vector<int>v;
while(cin>>n)
{
	if(n%2==1){
		n-=1;
		v.push_back(1);
		}
		
	if(n%4==2){
		n-=2;
		v.push_back(2);
		}	
		
	if(n%8==4){
		n-=4;
		v.push_back(4);
		}	
		
	if(n%16==8){
		n-=8;
		v.push_back(8);
		}	
		
	if(n%32==16){
		n-=16;
		v.push_back(16);
		}	
		
	if(n%64==32){
		n-=32;
		v.push_back(32);
		}	
		
	if(n%128==64){
		n-=64;
		v.push_back(64);
		}	
		
	if(n%256==128){
		n-=128;
		v.push_back(128);
		}	
		
	if(n%512==256){
		n-=256;
		v.push_back(256);
		}	
		
	if(n%1024==512){
		n-=512;
		v.push_back(512);
		}	
		int a=v.size();
		for(int i=0;i<a;i++){
			cout<<v[i];
			if(i==a-1){
				cout<<endl;
				}
			else{
				cout<<" ";
				}	
			}
			v.erase(v.begin(),v.end());
	}
	return 0;
		}