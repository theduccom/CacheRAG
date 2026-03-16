#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string pls(string a,string b){
	string ret;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(a.size()<b.size())swap(a,b);
	while(a.size()!=b.size())b+='0';
	while(a.size()+1!=ret.size())ret+='0';
	for(int i=0;i < a.size(); i++){
		ret[i] = a[i] + b[i] + ret[i] - '0'*3;
		if(ret[i]>9){
			ret[i] = '0' + ret[i]%10;
			ret[i+1] = '1';
		}else{
			ret[i]= '0' + ret[i];
		}
	}
	
	reverse(ret.begin(),ret.end());
	if(~ret.find_first_not_of('0'))return ret.substr(ret.find_first_not_of('0'),ret.size()-ret.find_first_not_of('0'));
	else return "0";
}

int main(){
	string a,b;
	int n;
	
	cin >> n;
	while(n--){
		cin >> a >> b;
		if(pls(a,b).length()>80)cout << "overflow" << endl;
		else cout << pls(a,b) << endl;
	}
}