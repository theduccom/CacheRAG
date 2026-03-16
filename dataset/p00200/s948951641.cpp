#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int cost[100][100];

int main()
{
	for(;;){
		int t,tt,ttt,tttt;
		int time[100][100];
		
		//n:f[^Ì m:wÌ
		int n, m;
		
		//k:â¢í¹Ì
		int k;
		
		cin >> n >> m;
		
		if(n == 0 && m == 0){
			break;
		}
		
		for(int i = 0; i < 100; i++){
			for(int j = 0; j < 100; j++){
				if(i!=j)
				{
					time[i][j] = 10000000;
					cost[i][j] = 10000000;
				}
				else{
					cost[i][j]=time[i][j]=0;
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			cin >> t >> tt >> ttt >> tttt;
			t--;
			tt--;
			cost[t][tt]=ttt;
			time[t][tt]=tttt;
			cost[tt][t]=ttt;
			time[tt][t]=tttt;
		}
		
		cin >> k;
		
		
		
			for(int f = 0; f < m; f++){
				for(int fd = 0; fd < m; fd++){
					for(int fds = 0; fds < m; fds++){
							cost[fd][fds] = min(cost[fd][fds] , cost[fd][f] + cost[f][fds]);
							time[fd][fds] = min(time[fd][fds] , time[fd][f] + time[f][fds]);
					}
				}
			}
		
		for(int i = 0; i < k; i++){
			cin >> t >> tt >> ttt;
			

			if(ttt == 0){
				cout << cost[t-1][tt-1] << endl;
			}
			else{
				cout << time[t-1][tt-1] << endl;
			}
		}
	}
	
}