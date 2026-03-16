#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <time.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;



int calc_E(char line[101],int left,int right);
int calc_T(char line[101],int left,int right);
int calc_F(char line[101],int left,int right);
int calc_NUM(char line[101],int left,int right);


int calc_E(char line[101],int left,int right){

	int depth = 0;
	queue<int> Q;

	//深さ0の、プラスまたは-を探す
	for(int i = left; i <= right; ){
		if(line[i] == '(')depth++;
		else if(line[i] == ')')depth--;

		if(depth != 0){
			i++;
		}else if(line[i] != '+' && line[i] != '-'){
			i++;
		}else{
			if(line[i] == '+'){
				Q.push(i);
				i++;
			}else{ //line[i] == '-'
				if((i != left) && ((line[i-1] >= '0' && line[i-1] <= '9') || line[i-1] == ')')){ //-は、depthが0でもnegの場合あり
					Q.push(i);
				}
				while(i <=right && line[i] == '-')i++; //negの-が続いている場合があるので、読み飛ばす
			}
		}
	}

	if(Q.empty()){ //深さ0の+-がない
		return calc_T(line,left,right);
	}

	int tmp = calc_E(line,left,Q.front()-1),tmp_right;

	if(tmp == BIG_NUM)return BIG_NUM;

	while(!Q.empty()){
		int loc = Q.front();
		Q.pop();

		if(Q.empty()){
			tmp_right = calc_T(line,loc+1,right);
		}else{
			tmp_right = calc_T(line,loc+1,Q.front()-1);
		}

		if(tmp_right == BIG_NUM){
			return BIG_NUM;
		}

		if(line[loc] == '+'){
			tmp += tmp_right;
		}else{
			tmp -= tmp_right;
		}
	}

	return tmp;
}

int calc_T(char line[101],int left,int right){

	int depth = 0;
	queue<int> Q;

	//深さ0の、*,/を探す
	for(int i = left; i <= right; ){
		if(line[i] == '(')depth++;
		else if(line[i] == ')')depth--;

		if(depth != 0){
			i++;
		}else if(line[i] != '*' && line[i] != '/'){
			i++;
		}else{
			Q.push(i);
			i++;
		}
	}

	if(Q.empty()){ //深さ0の*がない
		return calc_F(line,left,right);
	}

	int tmp = calc_T(line,left,Q.front()-1),tmp_right;

	if(tmp == BIG_NUM)return BIG_NUM;

	while(!Q.empty()){
		int loc = Q.front();
		Q.pop();

		if(Q.empty()){
			tmp_right = calc_F(line,loc+1,right);
		}else{
			tmp_right = calc_F(line,loc+1,Q.front()-1);
		}

		if(tmp_right == BIG_NUM){
			return BIG_NUM;
		}

		if(line[loc] == '*'){
			tmp *= tmp_right;
		}else{
			tmp /= tmp_right;
		}
	}
	return tmp;
}

int calc_F(char line[101],int left,int right){

	if(line[left] >= '0' && line[left] <= '9'){
		return calc_NUM(line,left,right);
	}else if(line[left] == '-'){
		return -1*calc_F(line,left+1,right);
	}else if(line[left] == '('){

		int depth = 0;
		int close_pos = BIG_NUM;

		for(int i = left; i <= right; i++){
			if(line[i] == '(')depth++;
			else if(line[i] == ')'){
				depth--;
				if(depth == 0){
					close_pos = i;
					break;
				}
			}
		}

		if(close_pos == BIG_NUM || close_pos != right)return BIG_NUM;

		return calc_E(line,left+1,close_pos-1);
	}else{
		return BIG_NUM;
	}
}

int calc_NUM(char line[101],int left,int right){

	int ret = 0;
	for(int i = left; i <= right; i++){
		ret = 10*ret+line[i]-'0';
	}
	return ret;
}


int main(){

	int N,length;
	char buf[101];

	scanf("%d",&N);

	for(int loop = 0; loop < N; loop++){
		scanf("%s",buf);
		for(length = 0; buf[length] != '='; length++);

		printf("%d\n",calc_E(buf,0,length-1));
	}

	return 0;
}

