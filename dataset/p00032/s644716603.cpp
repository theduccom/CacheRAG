#include <iostream>
#include <vector>

using namespace std;

int main(){

	char comma;
	int l1,l2,l3;

	int rect=0;
	int rhombus=0;

	while(cin>>l1>>comma>>l2>>comma>>l3){
		if(l1==l2){
			if(l1*l1+l2*l2==l3*l3)
				rect++;
			else
				rhombus++;
		}
		else{
			if(l1*l1+l2*l2==l3*l3)
				rect++;
		}
	}
	cout<<rect<<endl;
	cout<<rhombus<<endl;

	return 0;
}