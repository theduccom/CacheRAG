#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int w,h;
	while(cin>>h>>w&&!(w==0&&h==0)){
		vector<string> field;
		string str;
		for(int i = 0; i < h; i++){
			cin>>str;
			field.push_back(str);
		}
		bool isPassed[200][200];
		memset(isPassed,0,sizeof(isPassed));
		int sy,sx;
		sy=sx=0;
		bool f=true;
		while(1){
			if(isPassed[sy][sx]){
				f=false;
				break;
			}
			isPassed[sy][sx]=true;
			if(field[sy][sx]=='>'){
				sx++;
			}
			else if(field[sy][sx]=='<'){
				sx--;
			}
			else if(field[sy][sx]=='v'){
				sy++;
			}
			else if(field[sy][sx]=='^'){
				sy--;
			}
			else
				break;
		}
		if(!f){
			cout<<"LOOP"<<endl;
		}
		else
			cout<<sx<<" "<<sy<<endl;
	}

	return 0;
}