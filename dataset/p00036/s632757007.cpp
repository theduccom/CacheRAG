#include <iostream>
using namespace std;

int check_n(char math[]){
	int i=0;
	int count = 0;
	while(math[i]){
		if(math[i]=='1') count++;
		i++;
	}
	return (count);
}

int check_p(char math[]){
	int i=0;
	int count = 0;
	while(math[i]){
		if(math[i]=='1') break;
		i++;
	}
	return (i);
}


int main(void)
{
	char math[10][10]={0};
	while(cin >> math[0]){
		for(int i=1; i<8; i++){
			cin >> math[i];
		}
		int i=0;
		int count;
		for(; i<8; i++){
			if(check_n(math[i])) {
				count = check_n(math[i]);
				break;
			}
		}
		if(count == 4){
			cout << "C" << endl;
		}else if( count == 2 ){
			switch(check_p(math[i+1])-check_p(math[i])){
			case 1:
				cout << "E" << endl;
				break;
			case 0:
				cout << "A" << endl;
				break;
			case -1:
				cout << "G" << endl;
				break;
			}
		}else if (count == 1){
			switch(check_n(math[i+1])){
			case 1:
				cout << "B" << endl;
				break;
			case 2:
				if(check_p(math[i+1])-check_p(math[i])==0){
					cout << "F" << endl;
				}else{
					cout << "D" << endl;
				}
				break;
			}
		}
	}
	return 0;
}