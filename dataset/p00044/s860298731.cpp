#include <iostream>
using namespace std;

const int NUM_MAX = 50000;

bool isPrime(int num){
    for(int i=3; i*i<=num; i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int getPrimeOverMin(int value){
	if((value & 0x00000001) == 0x00000000){
		++value;
	}else{
		value += 2;
	}
	for(int i=value; i>0; i+=2){
		if(isPrime(i)){
			return i;
		}
	}
	return 0;
}

int getPrimeUnderMax(int value){
	if((value & 0x00000001) == 0x00000000){
		--value;
	}else{
		if(value==3)return 2;
		value -= 2;
	}

	for(int i=value; i>2; i-=2){
		if(isPrime(i)){
			return i;
		}
	}
	return 0;
}


//0044
int main(){
	int n;
	
	while(cin >> n){
		cout << getPrimeUnderMax(n) << " " << getPrimeOverMin(n) << endl;
	}
	return 0;	
}