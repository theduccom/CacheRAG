#include<iostream>
#include<string>
using namespace std;
int main(){
	int w;
	while(true){
	cin>>w;
	if(w==-1)
		break;
	int count=0;
	count+=1150;
	for(int i=10;i<min(20,w);i++)
		count+=125;
	for(int i=20;i<min(30,w);i++)
		count+=140;
	for(int i=30;i<w;i++)
		count+=160;
	cout<<4280-count<<endl;
	}
    return 0;
}
 