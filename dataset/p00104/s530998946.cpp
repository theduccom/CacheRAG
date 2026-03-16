#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int H,W;
	while(cin>>H>>W,H){
		vector<string> vstr(H);
		vector<bool> memo(H*W,false);
		for(int i=0;i<H;i++){
			string str;
			cin>>str;
			vstr[i]=str;
		}
		int x=0,y=0;
		bool flag=false;
		while(!flag){
			memo[x+y*W]=true;
			switch(vstr[y][x]){
			case '>':
				x++;
				break;
			case '<':
				x--;
				break;
			case '^':
				y--;
				break;
			case 'v':
				y++;
				break;
			case '.':
				flag=true;
				break;
			}
			if(!flag){
				if(memo[y*W+x]){
					break;
				}
			}
		}
		if(flag){
			cout<<x<<" "<<y<<endl;
		}
		else{
			cout<<"LOOP"<<endl;
		}
	}

	return 0;
}