#include <cstdio>
#include <climits>
#include <cstring>

#define STATION_MAX 101

//#define dprintf(arg1, ... ) printf( arg1, __VA_ARGS__)
#define dprintf(arg1, ... ) 

/*
typedef struct {
	
} LINE;
*/
int line_cnt, stat_cnt;
int line_cost[2][STATION_MAX][STATION_MAX];
int stat_cost[STATION_MAX];
bool stat_flag[STATION_MAX];

void check_tonari( int lcost[STATION_MAX][STATION_MAX], int nowstat ) {
	for ( int i=1; i<stat_cnt+1; i++ ) {
		if ( lcost[nowstat][i] == -1 ) { continue; }
		if ( stat_cost[i] == -1 ||  stat_cost[i] > stat_cost[nowstat] + lcost[nowstat][i] ) {
			dprintf( "Refresh stat_cost[%d]:  %d (old: %d)\n", i, stat_cost[nowstat] + lcost[nowstat][i], stat_cost[i]);
			stat_cost[i] = stat_cost[nowstat] + lcost[nowstat][i];
		}
	}
}

int main(void) {

	while(1) {
		scanf("%d %d\n", &line_cnt, &stat_cnt);
		if ( line_cnt==0 && stat_cnt== 0 ) { break; }
		
		memset( line_cost, -1, sizeof(int)*2*STATION_MAX*STATION_MAX );
		
		int a; int b; int fee; int time;
		for( int i=0; i<line_cnt; i++ ) {
			scanf("%d %d %d %d\n", &a, &b, &fee, &time );
			line_cost[0][a][b] = line_cost[0][b][a] = fee;
			line_cost[1][a][b] = line_cost[1][b][a] = time;
		}
		
		int query_cnt;
		scanf("%d\n", &query_cnt );
		
		for( int i=0; i<query_cnt; i++ ) {
			int start, end, type;
			
			scanf("%d %d %d\n", &start, &end, &type );
			
			memset( stat_cost, -1, sizeof(int)*STATION_MAX );
			memset( stat_flag, false, sizeof(bool)*STATION_MAX );
			
			stat_cost[start] = 0;
			
			while(1) {
				int minstat = -1;
				int minval=INT_MAX;
				for ( int i=1; i<stat_cnt+1; i++ ) {
					if ( stat_cost[i] == -1 ) { continue; }
					if ( stat_flag[i] == true ) { continue; }
					if ( stat_cost[i] < minval ) { minstat = i; minval = stat_cost[i]; }
				}
				if ( minstat == -1 ) { break; }
				dprintf("minstat: %d stat_cost=%d\n", minstat, stat_cost[minstat]);
				
				stat_flag[minstat] = true;
				check_tonari( line_cost[type], minstat );
			}
			
			printf("%d\n", stat_cost[end]);
		}
	}
	
	return 0;
}