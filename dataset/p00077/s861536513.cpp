#include<iostream>
#include<string>
using namespace std;
int main(){
	for(;;){
		string words,sorce;
		getline(cin,words);
		if(words == ""){break;}
		for(int i=0; i<words.size(); i++){
			if(words[i] == '@'){
				for(int j=0; j<((int)words[i+1])-48; j++){
					sorce+=words[i+2];
				}
				i+=2;
			}
			else{sorce+=words[i];}
		}
		cout<<sorce<<endl;
	}
	return 0;
}