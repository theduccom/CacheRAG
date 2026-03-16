#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int num,x=0;
	string str,sum,ans;
	char c;
	while(getline(cin,str)){
		for(int j=0;j<26;j++){
			sum="";
			for(int i=0;i<str.size();i++){
				if('a'<=str[i]&&str[i]<='y'){
					c=str[i];
					c+=1;
					sum+=c;
				}else if(str[i]=='z'){
					c=str[i];
					c-=25;
					sum+=c;
				}else{
					c=str[i];
					sum+=c;
				}
			}
			swap(str,sum);
			num=0;
			for(int l=0;l<str.size();l++){
				if(str[l]==' '||str[l]=='.'){
					ans="";
					for(int k=num;k<l;k++){
						c=str[k];
						ans+=c;
					}
					num=l+1;
					if(ans=="this"||ans=="that"){
						x=1;
						break;
					}else if(ans=="the"){
						x=1;
						break;
					}
				}
			}
			if(x==1){
				cout<<str<<endl;
				x=0;
				break;
			}
		}
	}
	return 0;
}