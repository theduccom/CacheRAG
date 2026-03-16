#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int y, x, i, j;
	bool stop;
	string str;
	while(true){
		cin>>y>>x;if(y==0 &&x==0) break;
		vector<vector<pair<char, bool> > > field(y, vector<pair<char, bool> >(x));
		for(i=0;i<y;i++){
			cin>>str;
			for(j=0;j<x;j++){
				field[i][j].first = str[j];
				field[i][j].second = false;
			}
		}
		stop=false;
		j = i = 0;
		while(true){
			if(stop==true){
				cout<<j<<" "<<i<<endl;
				break;
			}else if(field[i][j].second == true){
				cout<<"LOOP\n";
				break;
			}
			field[i][j].second = true;
			switch(field[i][j].first){
				case '.': stop=true; break;
				case '>': j++; break;
				case 'v': i++; break;
				case '<': j--; break;
				case '^': i--; break;
			}
		}
	}
	return 0;
}