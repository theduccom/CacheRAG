#include<iostream>
using namespace std;

int middium(int mat,int ing, int jap){
	return (mat + ing + jap) / 3;
}


void classes(int mat,int ing,int jap){
	int mid;
	mid = middium(mat,ing,jap);

	if(mat == 100 || ing == 100 || jap == 100) cout <<  "A";
	else if((mat + ing)/2 >= 90)	cout << "A";
	else if(mid >= 80)	cout <<  "A";
	else if(mid	>= 70)	cout <<  "B";
	else if(mid >= 50 && (mat >= 80 || ing >= 80))	cout <<  "B";
	else	cout << "C";
}

int main(){
	int n,pm,pe,pj;
	char cla;

	while(cin >> n,n){
		for(int i=0;i<n;i++){
			cin >> pm >> pe >> pj;
			classes(pm,pe,pj);
			cout << endl;
		}
	}

	return 0;
}