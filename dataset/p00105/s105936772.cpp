#include <iostream>
#include <string>

using namespace std;

struct info{
	string word;
	int p;
	int page[1000];
};

void intsort(int a[1000], int p)
{
	int t;
	for(int i = p; i >= 0; i--){
		for(int j = 1; j <= i; j++){
			if(a[j] < a[j-1]){
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
	return ;
}

void strsort(info a[101], int p)
{
	info t;
	for(int i = p; i >= 0; i--){
		for(int j = 1; j <= i; j++){
			if(a[j-1].word > a[j].word){
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
	return ;
}

int main()
{
	string str;
	int s, t = 0;
	info index[101];
	bool f;

	while(cin >> str >> s){
		if(t > 0){
			f = true;
			for(int i = 0; i < t; i++){
				if(str == index[i].word){
					index[i].page[index[i].p] = s;
					index[i].p += 1;
					f = false;
					break;
				}
			}
			if(f){
				index[t].word = str;
				index[t].page[0] = s;
				index[t].p = 1;
				t++;
			}
		} else {
			index[t].word = str;
			index[t].p = 1;
			index[t].page[0] = s;
			t++;
		}
	}
	
	for(int i = 0; i < t; i++){
		intsort(index[i].page, index[i].p-1);
	}
	strsort(index, t-1);
	
	for(int i = 0; i < t; i++){
		cout << index[i].word << endl;
		cout << index[i].page[0];
		for(int j = 1; j < index[i].p; j++){
			cout << " " << index[i].page[j];
		}
		cout << endl;
	}
	
	return 0;
}