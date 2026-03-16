#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <sstream>
#include <algorithm>

#define INF 10000000

int n, m, st, gl, money, pole;
int roads[21][21];
int in[4];
std::string input;

int check( int start, int goal ){
	int cost[21];
	int used = 0;

	std::fill( cost, cost + 21, INF );
	cost[start] = 0;

	while(1){
		int v = -1;
		for( int i = 1; i <= n; i++ ){
			if( !(used & 1 << i ) && (v == -1 || cost[i] < cost[v]) ) v = i;
		}

		if( v == -1 )break;

		used = used | 1 << v;

		for( int i = 1; i <= n; ++i ){
			cost[i] = std::min( cost[i], cost[v] + roads[v][i] );
		}
	}

	return cost[goal];
}

int main(){
	for( int i = 0; i < 21; ++i )
		std::fill( roads[i], roads[i] + 21, INF );

	std::cin >> n >> m;

	for( int i = 0; i < m; ++i ){
		std::cin >> input;

		sscanf( input.c_str(), "%d,%d,%d,%d", in, &in[1], &in[2], &in[3] );

		roads[ in[0] ][ in[1] ] = in[2];
		roads[ in[1] ][ in[0] ] = in[3];
	}

	std::cin >> input;
	sscanf( input.c_str(), "%d,%d,%d,%d", &st, &gl, &money, &pole );

	money -= pole;

	int cost = check( st, gl );
	cost += check( gl, st );

	std::cout << money - cost << std::endl;
}