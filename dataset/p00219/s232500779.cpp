#include<iostream>

const int N = 10;
int b[N],m,n;

void erace(){
	for(int i=0; i<N; i++)
		b[i] = 0;
}

void show(){
	for(int i=0; i<N; i++){
		if(b[i]==0)
			std::cout << '-';
		else
			for(int n=0; n<b[i]; n++)
				std::cout << '*';
		std::cout << std::endl;
	}
}

int main(){
	while(true){
		std::cin >> n;
		if(!n)
			return 0;
		erace();
		for(int i=0; i<n; i++){
			std::cin >> m;
			b[m]++;
		}
		show();
	}
	return 0;
}