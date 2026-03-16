#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<queue>
using namespace std;
typedef pair<string, int> P;
int dx[4] = {-1,1,-4,4};
map<string,int> strMap;
bool check(int num){
	if(num >= 0 && num <= 7){
		return true;
	}
	return false;
}

void BFS(string s){
	queue<P> que;
	strMap.insert(P(s,0));
	que.push(P(s,0));
	while(que.size()){
		P temp = que.front();
		que.pop();
	//	cout << temp.first  << endl;
		string strTemp = temp.first;
		int ZeroPos = 0;
		for(int i = 0; i < 8; ++i){
			if(strTemp[i] == '0'){
				ZeroPos = i;
				break;
			}
		}
		for(int i = 0; i < 4;++i){
			if(check(ZeroPos + dx[i])){
				if(ZeroPos == 3 && dx[i] == 1){  //不能从3移&#21160;到4或 4移&#21160;到3
					continue;
				}
				if(ZeroPos == 4 && dx[i] == -1){
					continue;
				}
 				swap(strTemp[ZeroPos], strTemp[ZeroPos+dx[i]]);
				string strTemp2 = strTemp;
				if(strMap.find(strTemp2) == strMap.end()){
					strMap.insert(P(strTemp2,temp.second + 1));
					que.push(P(strTemp2,temp.second + 1));
				}
				swap(strTemp[ZeroPos], strTemp[ZeroPos+dx[i]]);
			}
		}
	}
}

int main(){
	string s;
	string des = "01234567";
	 
	while(getline(cin,s)) {
		s.erase(remove(s.begin(), s.end(), ' '), s.end());
		BFS(des);
		int result = strMap.find(s) -> second;
		cout << result <<endl;
	}
	return 0;
}