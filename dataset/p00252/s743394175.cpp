#include<iostream>
using namespace std;
main()
{
	int date[3];
	for(int i=0;i<3;i++)cin>>date[i];
	if (date[0]==1){
		if (date[2]==0){
			if (date[1]==0){
				cout<<"Close"<<endl;
			}else{
				cout<<"Open"<<endl;
			}
		}
	}else if (date[0]==0){
		if (date[1]==1){
			if (date[2]==0) cout<<"Close"<<endl;
		}else{
			if (date[2]==0){
				cout<<"Close"<<endl;
			}else{
				cout<<"Open"<<endl;
			}
		}
	}
}