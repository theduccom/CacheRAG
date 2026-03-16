#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int a[5];
	while(scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])!=EOF){
		sort(a, a+5);
		if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3] || a[4]==a[1]&&a[4]==a[2]&&a[4]==a[3]){
			cout << "four card" << endl;
		} else if(a[0]==a[1]&&a[1]==a[2]){
			if(a[3]==a[4]){
				cout << "full house" << endl;
			} else {
				cout << "three card" << endl;
			}
		} else if(a[4]==a[3]&&a[2]==a[4]){
			if(a[0]==a[1]){
				cout << "full house" << endl;
			} else {
				cout << "three card" << endl;
			}
		} else if(a[1]==a[2]&&a[1]==a[3]){
			cout << "three card" << endl;
		} else if(a[0]==a[1]&&(a[2]==a[3]||a[3]==a[4])){
			cout << "two pair" << endl;
		} else if(a[1]==a[2] && a[3]==a[4]){
			cout << "two pair" << endl;
		} else if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3]||a[3]==a[4]){
			cout << "one pair" << endl;
		} else if(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13){
			cout << "straight" << endl;
		} else if(a[0]+1==a[1]&&a[0]+2==a[2]&&a[0]+3==a[3]&&a[0]+4==a[4]){
			cout << "straight" << endl;
		} else {
			cout << "null" << endl;
		}
	}
	return 0;
}