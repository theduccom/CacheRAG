#include <iostream>
using namespace std;

bool cup[3] = {1,0,0};
void swap(int a,int b){
	bool tmp;
	tmp = cup[a];
	cup[a] = cup[b];
	cup[b] = tmp;
}

int main()
{
	char a,dot,b;
	while(cin >> a && cin >> dot && cin >> b){
		swap(static_cast<int>(a-'A'),static_cast<int>(b-'A'));
	}
	for(int i=0;i<3;i++){
		if(cup[i] == 1)
			cout << static_cast<char>(i+'A') << endl;
	}	
	return 0;
}