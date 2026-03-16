#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	int n;
	string str;
	int blood[4] = {0};
	while(scanf("%d,",&n)!=EOF){
		cin>>str;
		if(str == "A") blood[0]++;
		else if(str == "B") blood[1]++;
		else if(str == "AB") blood[2]++;
		else if(str == "O") blood[3]++;
	}
	cout<<blood[0]<<endl<<blood[1]<<endl<<blood[2]<<endl<<blood[3]<<endl;
	return 0;
}