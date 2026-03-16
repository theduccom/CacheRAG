#include <iostream>
#include <vector>

using namespace std;

int main(){

	int value;
	int quan;

	int sumValue=0;
	int idx=0;
	double avg=0;

	char cm;
	while(cin>>value>>cm>>quan){
		sumValue+=value*quan;
		avg+=quan;
		idx++;
	}
	avg/=idx;
	cout<<sumValue<<endl;
	cout<<(int)(avg+0.5)<<endl;

	return 0;
}