#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string input;
	int blood[4] = {}, hoge;
	while (scanf("%d,", &hoge) != EOF){
		cin >> input;
		if (input == "A") blood[0]++;
		else if (input == "B") blood[1]++;
		else if (input == "AB") blood[2]++;
		else blood[3]++;
	}
	for (int i = 0; i < 4; i++){
		printf("%d\n", blood[i]);
	}
	return 0;
}