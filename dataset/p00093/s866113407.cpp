#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int syear,eyear;
	while(cin >> syear && cin >> eyear){
		if(syear == 0)
			break;
		else{
			if(count!=0)
				cout << endl;
		}			
		bool flag = false;
		for(int i=syear;i<=eyear;i++){
			if(i%4==0){
				if(i%400==0){
					flag = true;
					cout << i << endl;
				}
				else if(i%100==0){
				}
				else{
					flag = true;
					cout << i << endl;
				}
			}
		}
		if(flag==false)
			cout << "NA" << endl;
		count++;
	}
	return 0;
}