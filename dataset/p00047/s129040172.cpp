#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	bool mat[] = {1,0,0};
	string line;
	while(getline(cin,line)){
		bool tmp = mat[line[0]-65];
		mat[line[0]-65] = mat[line[2]-65];
		mat[line[2]-65] = tmp;
	}

	if(mat[0]){
		cout<<"A"<<endl;
	}else if(mat[1]){
		cout<<"B"<<endl;
	}else{
		cout<<"C"<<endl;
	}
	return 0;
}