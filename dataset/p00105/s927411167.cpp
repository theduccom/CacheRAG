#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct dic{
	string s;
	int page[1001];
};

dic d[101];

int comp(const void *a, const void *b){
if(((dic*)a)->s > ((dic*)b)->s) return 1;
else return -1;
}

int main(void){
	int i,j,p,tail=0;
	string str;
while((cin >> str) != NULL){
		for(i=0;i<tail;i++){
			if(str == d[i].s){
				cin >> p;
				d[i].page[p]=1;
				break;
			}
		}
		if(i == tail){
			d[tail].s = str;
			cin >> p;
			d[tail].page[p]=1;
			tail++;
		}
	}

	qsort(&d,tail,sizeof(dic),comp);
	int f;
	for(i=0;i<tail;i++){
		f=0;
		cout << d[i].s << endl;
		for(j=0;j<1001;j++){
			if(d[i].page[j] == 1){
				if(f) cout << " " << j;
				else{ cout << j; f++;}
			}
		}
		cout << endl;
	}
	return 0;
}