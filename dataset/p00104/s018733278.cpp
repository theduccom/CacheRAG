#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
	vector< vector<char> > tile(101, vector<char>(101));
	int W, H, i, j;
	map<pair<int, int>, int> passed;
	while (cin>>H>>W, H||W) {
		for (j = 0; j < H; j++)
			for (i = 0; i < W; i++)
				cin>>tile[i][j];
		i = 0;
		j = 0;
		passed.clear();
		while (!passed[make_pair(i,j)]) {
			if (tile[i][j]=='.') {
				cout<<i<<" "<<j<<endl;
				break;
			}
			passed[make_pair(i,j)] = 1;
			if (tile[i][j]=='<') i--;
			else if (tile[i][j]=='>') i++;
			else if (tile[i][j]=='^') j--;
			else if (tile[i][j]=='v') j++;
		}
		if (passed[make_pair(i,j)]) cout<<"LOOP"<<endl;
	}
	return 0;
}