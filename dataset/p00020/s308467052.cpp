#include <iostream>
#include <string>
using namespace std;
int main(){
	string str,ans="";
	char hennkann;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if('a'<=str[i]&&str[i]<='z'){
			hennkann=str[i];
			hennkann-=32;
			ans+=hennkann;
		}else if(str[i]==' '){
			ans+=' ';
		}else{
			ans+='.';
		}
	}
	cout<<ans<<endl;
	return 0;
}