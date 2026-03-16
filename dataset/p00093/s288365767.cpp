#include <iostream>
using namespace std;

int main(void){
	bool first = true; //true : êÔÅ false:2ñÚÈ~

	while(1){
		int a,b;
		int count = 0;

		cin>>a>>b;
		if(a == 0 && b == 0) break;

		if(first == true){
			first = false;
		}
		else{
			cout<<endl;
		}

		for(int i=a;i<=b;i++){
			bool flg = false;
			//true : ¤é¤Çµ, false:¤é¤ÇµÅÈ¢

			if(i % 4 == 0){
				if(i % 100 == 0){
					if(i % 400 == 0) flg = true;
					else flg = false;
				}
				else{
					flg = true;
				}
			}

			if(flg == true){
				cout<<i<<endl;
				count++;
			}
		}

		if(count == 0){
			cout<<"NA\n";
		}
	}

	return 0;
}