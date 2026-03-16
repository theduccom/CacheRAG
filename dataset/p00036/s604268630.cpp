#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	while(1){
		vector<vector<int> > all;
		bool endflg = false;
		vector<int> vbuf = vector<int>(13, 0);
		all.push_back(vbuf);
		for(int i=0; i<8; i++){
			string buf;
			if(!(cin>>buf)) endflg = true;
			if(endflg) break;

			vector<int> vb;
			vb.push_back(0);
			for(int j=0; j<12; j++){
				if(j<8) vb.push_back(buf[j]-'0');
				else    vb.push_back(0);
			}
			all.push_back(vb);
		}
		if(endflg) break;
		for(int i=0; i<4; i++){
			all.push_back(vbuf);
		}

		/*
		for(int i=0; i<all.size(); i++){
			for(int j=0; j<all[i].size(); j++){
				cout<<all[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		*/

		string ans = "NG";
		for(int i=1; i<9; i++){
			bool breakflg = false;
			for(int j=1; j<9; j++){
				if(all[i][j]==1){
					if(all[i][j+1]&&all[i+1][j]&&all[i+1][j+1]){
						ans = "A";
					} else if(all[i+1][j]&&all[i+2][j]&&all[i+3][j]){
						ans = "B";
					} else if(all[i][j+1]&&all[i][j+2]&&all[i][j+3]){
						ans = "C";
					} else if(all[i+1][j]&&all[i+1][j-1]&&all[i+2][j-1]){
						ans = "D";
					} else if(all[i][j+1]&&all[i+1][j+1]&&all[i+1][j+2]){
						ans = "E";
					} else if(all[i+1][j]&&all[i+1][j+1]&&all[i+2][j+1]){
						ans = "F";
					} else if(all[i][j+1]&&all[i+1][j-1]&&all[i+1][j]){
						ans = "G";
					}
					breakflg = true;
					break;
				}
			}
			if(breakflg) break;
		}
		cout<<ans<<endl;
	}
	return 0;
}