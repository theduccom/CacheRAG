#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	string str;
	
	while(cin>>str, !cin.eof()){
		
		int n=str.size();
		string res = "";
		
		for(int i=0; i<n; ++i){
			
			if(str[i]!='@'){
				res+=str[i];
			}
			else{
				
				int p = str[i+1]-'0';
				
				for(int j=0; j<p; ++j){
					res += str[i+2];
				}
				
				i+=2;
			}
		}
		
		cout << res << endl;
	}
	
	return 0;
}