#include<iostream>

int *p,*d,m,n,o;

int max(){
	int tmp=d[0],ans=0;
	for(int i=1; i<m; i++){
		if(d[i]>tmp){
			tmp = d[i];
			ans = i;
		}
	}
	return ans;
}

int main(){
	while(true){
		std::cin >> m;
		if(!m)
			return 0;
		p = new int[m];
		d = new int[m];
		for(int i=0; i<m; i++){
			std::cin >> p[i] >> n >> o;
			d[i] = n+o;
		}
		n = max();
		std::cout << p[n] << ' ' << d[n] << std::endl;
		delete[] p;
		delete[] d;
	}
}