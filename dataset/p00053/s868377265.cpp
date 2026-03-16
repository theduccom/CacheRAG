#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
typedef vector <int> vi;
vi SIEVES,PRIMES;
vi sieve(int n){
    vi s;
    int i,j,m,x,h;
    for (i=1;i<n+2;i+=2) s.push_back(i);
    m=int(pow(n,0.5))+1;
	h=(int)s.size();
    s[0]=0;
    for (i=0;i<h;i++){
        x=s[i];
        if (x>m) break;
        if (x&&x+i<h)
            for (j=i+x;j<h;j+=x) s[j]=0;
    }
    return s;
}
vi prime(int n){
    vi p;
	SIEVES=sieve(n);
	p.clear();
	p.push_back(2);
    for (int i=0;i<n/2;i++)
        if (SIEVES[i]!=0) p.push_back(SIEVES[i]);
	return p;
}
int main(void){
	PRIMES=prime(105000);
	int n,s;
	while (true){
		s=0;
		cin>>n;
		if (n==0) break;
		for(int i=0;i<n;i++)
			s+=PRIMES[i];
		cout<<s<<"\n";
	}
} 