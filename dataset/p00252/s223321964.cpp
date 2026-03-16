#include<bits/stdc++.h>
using namespace std;
int main(void){
	int box[3];
	int flg;
	int i;
	for(i=0;i<3;i++)	cin>>box[i];
	flg=1;
	if(box[0]==box[1]&&box[1]!=box[2])	flg=0;
	cout<<((flg)?"Close":"Open")<<endl;
	return 0;
}
