#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

map<string,int> anslist;
string ansstr = "01234567";
int m[4] = {-4,-1,1,4};	//上,左,右,下

void solve(){
	int index;
	queue<string> q;
	q.push(ansstr);
	anslist[ansstr] = 0;
	while(!q.empty()){
		string buf = q.front();
		q.pop();
		index = buf.find('0');

		for(int i=0;i<4;i++){
			if(index+m[i]>=0 && index+m[i]<=7){
				//上段右端と下段左端の移動できないのはcontinue
				if(i==1&&index==4 || i==2&&index==3){
					continue;
				}

				//文字の交換
				string s = buf;
				s[index] = buf[index+m[i]];
				s[index+m[i]] = buf[index];
				
				//まだ登録されてない場合のみデータを追加
				if(!anslist.count(s)){
					q.push(s);
					anslist[s] = anslist[buf]+1;
				}
			}
		}
	}
}

int main(){
	solve();
	char num[8];
	while(cin >> num[0]){
		for(int i=1;i<8;i++){
			cin >> num[i];
		}
		string str = "";
		for(int i=0;i<8;i++){
			str += num[i];
		}
		cout << anslist[str] << endl;
	}
}