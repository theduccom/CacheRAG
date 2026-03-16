#include<iostream>
using namespace std;

int main(){
	int ans[4] = {0};
	char blood[2];
	int gar;
	char garb;

	while(cin >> gar >> garb >> blood){
		if(blood[0] == 'A'){
			if(blood[1] == 'B') ans[2]++;
			else ans[0]++;
		}
		if(blood[0] == 'B') ans[1]++;
		if(blood[0] == 'O') ans[3]++;
	}
	for(int i = 0; i < 4; i++){
		cout << ans[i] << endl;
		ans[i] = 0;
	}
}