#include <iostream>
#include <string>
#define MAX_N 101
using namespace std;

typedef struct{
string name;
int page;
}index;
index a[MAX_N];
index temp;
int n;
int main(){
	n=0;
	while(cin >> a[n].name >> a[n].page){
		n++;
	}

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j].name>a[j+1].name){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}else if(a[j].name==a[j+1].name&&a[j].page>a[j+1].page){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout << a[0].name << endl;
	cout << a[0].page;
	for(int i=1;i<n;i++){
		if(a[i-1].name!=a[i].name){
			cout <<endl << a[i].name << endl;
			cout <<a[i].page;
		}else if(a[i-1].name==a[i].name){
			cout << " "<<a[i].page;
		}
	}
	cout <<endl;
	return 0;
}