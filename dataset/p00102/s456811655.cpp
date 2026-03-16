#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void calculate(int const n);
void show_table(const vector<int> table, const int n);

int main()
{
	int n = 0;

	while(true) {
		cin >> n;
		if(n==0) break;
		calculate(n);
	}

	return 0;
}

void calculate(int const n)
{
	int row_n = n+1;
	vector<int> table((row_n)*(row_n),0);

	// 表への入力
	for(int i=1;i<=row_n*n;i++) {
		if(i%row_n==0) ;			//  結果が入るところはスキップ
		else
			cin >> table[i-1];
	}

	// 右側の和の計算 
	for(int i=n;i<=(row_n)*(row_n);i+=(row_n))
		for(int j=1;j<=n;j++)
			table[i] += table[i-j];

	// 下側の和の計算
	int count = 0;
	int j = 0;
	for(int i=0;i<n;i++) {
		count = 0;
		j = i;
		while(true) {
			table[(row_n)*n+i] += table[j];
			j += (row_n);
			count++;
			if(count==n) break;
		}
	}
	// 右下の和の計算
	for(int i=n;i<(row_n)*n;i+=(row_n))
		table[(row_n)*(row_n)-1] += table[i];

	show_table(table,n);
}

void show_table(const vector<int> table,const int n)
{
	int row_n = n+1;
	for(int i=0;i<(row_n)*(row_n);i+=(row_n)) {
		for(int j=i;j<i+row_n;j++)
			cout << setw(5) << table[j];
		cout << endl;
	}
}