#include<iostream>
using namespace std;

typedef unsigned long long ull;

ull effect[64];
void init(){
	for(int i=0;i<64;i++){
		int y=i/8,x=i%8;
		ull m=0;
		for(int j=-3;j<=3;j++){
			if(0<=y+j&&y+j<8)m |= 1ull<<(8*(y+j)+x);
			if(0<=x+j&&x+j<8)m |= 1ull<<(8*y+x+j);
		}
		effect[i]=m;
	}
}
int bitCount(ull x){
	x = (x>>1 & 0x5555555555555555ULL)+(x & 0x5555555555555555ULL);
	x = (x>>2 & 0x3333333333333333ULL)+(x & 0x3333333333333333ULL);
	x = (x>>4 & 0x0f0f0f0f0f0f0f0fULL)+(x & 0x0f0f0f0f0f0f0f0fULL);
	x = (x>>8 & 0x00ff00ff00ff00ffULL)+(x & 0x00ff00ff00ff00ffULL);
	x = (x>>16 & 0x0000ffff0000ffffULL)+(x & 0x0000ffff0000ffffULL);
	return ((int)(x>>32)+((int)x & 0xffffffff));
}
ull simulate(ull b,int y,int x){
	ull e=effect[8*y+x];
	while(e){
		ull hit = b&e;
		b &= ~hit;
		e=0;
		while(hit){
			e |= effect[bitCount((hit&-hit)-1)];
			hit &= hit-1;
		}
	}
	return b;
}
int main(){
	init();
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		ull b=0;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				char ch;
				cin>>ch;
				if(ch=='1')b|=1ull<<(8*j+k);
			}
			cin.ignore();
		}
		int x,y;
		cin>>x>>y;
		b = simulate(b,y-1,x-1);
		cout<<"Data "<<i<<':'<<endl;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cout<<(b>>8*j+k&1);
			}
			cout<<endl;
		}
	}
	return 0;
}