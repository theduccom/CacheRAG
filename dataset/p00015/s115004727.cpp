#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// string^ÅÁZðs¢AÊðÔ·
string add(string &str1,string &str2){
  string str;
  int carry = 0;
  for(int i = 0; i < max(str1.size(),str2.size()); i++){
    if(i >= str1.size()){
      int ret = carry + str2[str2.size()-1-i] - '0';
      carry = ret / 10;
      str += (ret % 10) + '0';
    }
    else if(i >= str2.size()){
      int ret = carry + str1[str1.size()-1-i] - '0';
      carry = ret / 10;
      str += (ret % 10) + '0';
    }
    else{
      int ret = str1[str1.size()-1-i] + str2[str2.size()-1-i] - '0' - '0' + carry;
      carry = ret / 10;
      str += (ret % 10) + '0';
    }
  }
  str+=(carry+'0');
  // jóIÏX
  reverse(str.begin(),str.end());
  // æªÌ0ðÁ·
  int idx;
  for(int i = 0; i < str.size(); i++){
    idx=i;
    if(str[i]!='0'||str.size()-1==i)
      break;
  }
  return str.substr(idx);
}

int main(){

	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		string s1,s2;
		cin>>s1>>s2;
		if(s1.size()>80||s2.size()>80){
			cout<<"overflow"<<endl;
		}
		else{
			string ret=add(s1,s2);
			if(ret.size()>80){
				cout<<"overflow"<<endl;
			}
			else
				cout<<ret<<endl;
		}
	}

	return 0;
}