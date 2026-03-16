#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

bool islower(char a){
	if(a>='a' && a<='z') return true;
	else return false;
}

int main(){
	string s,ans;
	while(getline(cin,s)){
		int shift=1;
		ans=s;
		while(1){
			if(ans.find("the" ,0)!=string::npos || ans.find("this",0)!=string::npos || ans.find("that",0)!=string::npos) break;
			for(int i=0;i<s.size();++i){
				if(islower(s[i])){
					if(s[i]+shift<='z'){
						ans[i]=s[i]+shift;
					} else {
						ans[i]=s[i]-26+shift;
					}
				}
			}
			shift++;
		}
		cout << ans << endl;
	}
	return 0; 
}