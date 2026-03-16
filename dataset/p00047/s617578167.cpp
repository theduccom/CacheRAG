#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	bool a[3]={true};
	char x,y;
	while(cin>>x){
		cin.ignore();
		cin>>y;
		swap(a[x-'A'],a[y-'A']);
	}
	cout<<(char)(find(a,a+3,true)-a+'A')<<endl;
	return 0;
}