#include<iostream>
#include<string>
using namespace std;
int main(){
	double a[10],n,m;
	char z;
	while(cin>>a[0]){
		double h=a[0];
		for(int i=1;i<10;i++){
			cin>>z>>a[i];
			h+=a[i];
		}
		cin>>z>>n>>z>>m;
		h=h*n/(n+m);
		int i=0,w=0;
		while(true){
			if(w>=h)
				break;
			w+=a[i];
			i++;
		}
		cout<<i<<endl;
	}
	return 0;
}