#include<iostream>
using namespace std;
int main(){
	double array[15];
	double sum=0;
	while(cin>>array[0]){
		for(int i=1;i<=9;i++){
			if(i%2==1){
				array[i]=array[i-1]*2;
			}else{
				array[i]=array[i-1]/3;
			}
		}
		for(int i=0;i<=9;i++){
			sum+=array[i];
		}
		cout.precision(10);
		cout<<sum<<endl;
		sum=0;
	}
}