#include<iostream>
using namespace std;

int main(){
	int edge1, edge2, diag, courec = 0, couloz = 0;
	while(scanf("%d,%d,%d", &edge1, &edge2, &diag) != EOF){
		if(edge1 == EOF || edge2 == EOF || diag == EOF) break;
		int edge11 = edge1 * edge1, edge22 = edge2 * edge2, diagg = diag * diag;
		if(edge1 != edge2 && edge11 + edge22 == diagg) courec++;
		else if(edge1 == edge2) couloz++;
	}
	cout <<courec <<endl <<couloz <<endl;
	return 0;
}