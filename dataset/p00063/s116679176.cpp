#include<iostream>
#include<string>

using namespace std;

int main(void){
	
	string Str,strBefore,strAfter;
	int strMiddle=0,count=0;
	bool miss;
	
	
	while(cin>>Str){
		if(Str.size()%2==0){
			
			strMiddle=Str.size()/2;
			strBefore=Str.substr(0,strMiddle);
			strAfter=Str.substr(strMiddle,Str.size());
			
			miss=false;
			for(int i=0;i<strBefore.size();i++){
				if(strBefore[i]!=strAfter[(strAfter.size()-1)-i]){
					miss=true;
					break;
				}
			}
			
			if(miss==false){
				count++;
			}
		}
		else if(Str.size()%2==1){
			
			strMiddle=Str.size()/2+1;
			strBefore=Str.substr(0,strMiddle-1);
			strAfter=Str.substr(strMiddle,Str.size());
			
			miss=false;
			for(int i=0;i<strBefore.size();i++){
				if(strBefore[i]!=strAfter[(strAfter.size()-1)-i]){
					miss=true;
					break;
				}
			}
			
			if(miss==false){
				count++;
			}
		}
		else if(Str.size()==1){
			count++;
		}
	}
	
	cout<<count<<endl;
}