#include <iostream>
using namespace std;

const int INF = 1000000000;

int main(){
	while(true){
		int n, m;
		cin >> n >> m;

		if(n==0 && m==0)
			break;

		int C[100][100];
		int T[100][100];
		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				if(i==j){
					C[i][j] = T[i][j] = 0;
				}
				else{
					C[i][j] = T[i][j] = INF;
				}
			}
		}

		for(int i=0; i<n; i++){
			int a, b, c, t;
			cin >> a >> b >> c >> t;

			C[a-1][b-1] = C[b-1][a-1] = c;
			T[a-1][b-1] = T[b-1][a-1] = t;
		}

    int cd[m][m];
    int td[m][m];

    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        cd[i][j] = C[i][j];
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        td[i][j] = T[i][j];
      }
    }

    for(int h=0; h<m; h++){
      for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
          if(cd[i][j] > cd[i][h]+cd[h][j]){
            cd[i][j] = cd[i][h]+cd[h][j];
          }
        }
      }
    }

    for(int h=0; h<m; h++){
      for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
          if(td[i][j] > td[i][h]+td[h][j]){
            td[i][j] = td[i][h]+td[h][j];
          }
        }
      }
    }

    int k;
    cin >> k;

    while(k>0){
      int p,q,r;
      cin >> p >> q >> r;

      if(r==0){
        cout << cd[p-1][q-1] << '\n';
      }else if(r==1){
        cout << td[p-1][q-1] << '\n';
      }

      k--;
    }

	}

	return 0;
}

