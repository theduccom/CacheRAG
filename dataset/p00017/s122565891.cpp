#include<cctype>
#include<string>
#include<iostream>

using namespace std;

int main(){
	string ciph;

	while(getline(cin,ciph)){
		int len=ciph.length();
		bool match=false;
		for(int i=0;i<26;i++){
			for(int j=0;j<len;j++){
				if(islower(ciph[j])){
					ciph[j]++;
					if(ciph[j]>'z')	ciph[j]-=26;
				}
			}

			for(int j=0;j<len-2;j++){
				if(ciph.substr(j,3)=="the"
				&& !islower(ciph[j+3])
				&& (j==0 || !islower(ciph[j-1]))){
					match=true;
				}
			}
			if(match)	break;

			for(int j=0;j<len-3;j++){
				if(ciph.substr(j,4)=="this"
				&& !islower(ciph[j+4])
				&& (j==0 || !islower(ciph[j-1]))){
					match=true;
				}
			}
			if(match)	break;

			for(int j=0;j<len-3;j++){
				if(ciph.substr(j,4)=="that"
				&& !islower(ciph[j+4])
				&& (j==0 || !islower(ciph[j-1]))){
					match=true;
				}
			}
			if(match)	break;
		}
		cout<<ciph<<endl;
	}

	return 0;
}