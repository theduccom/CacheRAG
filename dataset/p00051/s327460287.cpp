#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int index(char c){
	return (int)c - 48;
}

int num(vector<int> v){
	int total = 0;
	int n = 1;
	for(vector<int>::const_iterator iter = v.begin();
		iter != v.end(); iter++)
	{
		total += *iter * n;
		n = n * 10;
	}
	return total;
}

int rnum(vector<int> v){
	int total = 0;
	int n = 1;
	for(vector<int>::const_reverse_iterator iter = v.rbegin();
		iter != v.rend(); iter++)
	{
		total += *iter * n;
		n = n*10;
	}
	return total;
}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		vector<int> vi;
		char c;
		for(int j = 0; j < 8; j++){
			cin >> c;
			vi.push_back(index(c));
		}
		sort(vi.begin(), vi.end());
		int max;
		int min;
		max = num(vi);
		min = rnum(vi);
		cout << max - min << endl;
	}
	return 0;
}