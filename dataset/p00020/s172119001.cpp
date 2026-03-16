#include<iostream>
#include<vector>

using namespace std;

int main(void){
	
	int i;
	char a;
	vector<char> str;
	
	while(scanf("%c",&a)!=EOF){
		if('a'<=a&&a<='z'||a==' '||a=='.'){
			a=toupper(a);	
			str.push_back(a);
		}
	}
	
	for(i=0;i<(str.size());i++){
		cout<<str[i];
	}
	puts("");
	return 0;
}