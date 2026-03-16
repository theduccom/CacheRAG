#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	char temp;
	int max,min,N;
	cin>>N;
	for(int i=0;i<N;i++){
		max=0;
		min=0;
		cin>>a;
		for(int k=0;k<8;k++){
			for(int j=0;j<8;j++){
				if(a[k]>a[j]){
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
			
		}
		for(int k=0;k<8;k++){
			max=max*10+a[7-k]-48;
			min=min*10+a[k]-48;
		}
		cout<<min-max<<endl;
	}	
	return 0;
}