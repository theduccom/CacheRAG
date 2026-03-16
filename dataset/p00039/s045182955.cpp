#include<bits/stdc++.h>
using namespace std;

int main(){
	string sa;
	while(cin>>sa){
		int ans=0;
		
		for(int i=0;i<sa.size();i++){
			if(sa[i]=='M'){
				ans+=1000;
				}
			else if(sa[i]=='D'){
				if(i!=sa.size()-1&&sa[i+1]=='M')ans-=500;
				else ans+=500;
				}	
			else if(sa[i]=='C'){
				if(i!=sa.size()-1&&sa[i+1]=='D'||sa[i+1]=='M'){
					ans-=100;
					}
				else ans+=100;	
				}	
			else if(sa[i]=='L'){
				if(i!=sa.size()-1&&sa[i+1]=='D'||sa[i+1]=='M'||sa[i+1]=='C'){
					ans-=50;
					}
				else ans+=50;	
				}
			else if(sa[i]=='X'){
				if(i!=sa.size()-1&&sa[i+1]=='D'||sa[i+1]=='M'||sa[i+1]=='C'||sa[i+1]=='L'){
					ans-=10;
					}
				else ans+=10;	
				}	
			else if(sa[i]=='V'){
				if(i!=sa.size()-1&&sa[i+1]=='D'||sa[i+1]=='M'||sa[i+1]=='C'||sa[i+1]=='L'||sa[i+1]=='X'){
					ans-=5;
					}
					else ans+=5;
				}
			else{
				if(i!=sa.size()-1&&sa[i+1]!='I')ans-=1;
				else ans++;
				}			
			}
			cout<<ans<<endl;
		}
		return 0;
	}