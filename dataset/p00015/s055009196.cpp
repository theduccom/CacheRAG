#include<iostream>
#include<string>;
using namespace std;
string Sum(string str1, string str2){
	int str1_index, str2_index, num, advance;
	string strsum;
	if(str1.size() < str2.size()){
		while(str1.size() != str2.size()) str1 = "0" + str1;
	}else if(str1.size() > str2.size()){
		while(str1.size() != str2.size()) str2 = "0" + str2;
	}
	str1_index = str1.size()-1;
	str2_index = str2.size()-1;
	advance = 0;
	while(true){
		num = (str1[str1_index] - '0') + (str2[str2_index] - '0') + advance;//????????????????£?????¶???????+??°????????°
		strsum = char( (num % 10) + '0') + strsum;//??????????????\
		//cout<<"strsum="<<strsum<<endl;
		(num >= 10)? advance=1: advance=0;
		str1_index--;
		str2_index--;
		if(str1_index<0 || str2_index<0){
			if(advance>0) strsum = "1" + strsum;
			break;
		}
	}
	return strsum;
}

int main(){
	int i, n;
	string str1,str2;
	string strsum;
	while(cin>>n){
		for(i=0;i<n;i++){
			cin>>str1;
			cin>>str2;
			
			if(str1.size()>80 || str2.size()>80){
				cout<<"overflow"<<endl;
				continue;
			}
			strsum = Sum(str1, str2);
			if(strsum.size()>80)
				cout<<"overflow"<<endl;
			else
				cout<<strsum<<endl;
		}
	}
	
	return 0;
}