// 2011/01/16 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string str;
	istringstream is;

	getline(cin, str);
	is.str(str);

	int n;
	is >> n;

	int cst[21][21];
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(i==j)
				cst[i][j] = 0;
			else
				cst[i][j] = -1;

	is.clear();

	getline(cin, str);
	is.str(str);

	int m;
	is >> m;

	for(int i=0; i<m; i++){
		is.clear();

		getline(cin, str);
		for(int j=0; j<str.size(); j++)
			if(str[j]==',')
				str[j] = ' ';

		is.str(str);

		int a, b, c, d;
		is >> a >> b >> c >> d;
		cst[a][b] = c;
		cst[b][a] = d;
	}

	for(int k=1; k<=n; k++)
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				if(cst[i][k]!=-1&&cst[k][j]!=-1)
					if(cst[i][j]==-1||cst[i][j]>cst[i][k]+cst[k][j])
						cst[i][j] = cst[i][k]+cst[k][j];

	is.clear();

	getline(cin, str);
	for(int i=0; i<str.size(); i++)
		if(str[i]==',')
			str[i] = ' ';

	is.str(str);

	int x1, x2, y1, y2;
	is >> x1 >> x2 >> y1 >> y2;

	cout << y1-y2-cst[x1][x2]-cst[x2][x1] << endl;

	return 0;
}