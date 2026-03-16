#include <iostream>
#include <cstdio>
#include <algorithm>

#define INF 10000

using namespace std;

short int moves[20000000];

int ID[8];

int ID_to_int(int id[8]){
	int ref = 0;
	for(int i = 0; i < 8; i++){
		ref *= 8;
		ref += id[i];
	}
	return ref;
}

void int_to_ID(int id[8], int num){
	int dummy = num;
	for(int i = 0; i < 8; i++){
		id[7 - i] = dummy % 8;
		dummy /= 8;
	}
	return;
}

int main(){
	
	for(int i = 0; i < 20000000; i++){
		moves[i] = INF;
	}
	
	for(int i = 0; i < 8; i++){
		ID[i] = i;
	}
	moves[ID_to_int(ID)] = 0;
	
	int count = 0;
	
	for(int loop = 0; loop < 20; loop++){
		count = 0;
		sort(ID, ID + 8);
		do{
			int i = ID_to_int(ID);
			//cout << i << " ";
			if(moves[i] < INF){
				
				count++;
				
				for(int j = 0; j < 8; j++){
					if(ID[j] == 0){
						swap(ID[j], ID[(j + 4) % 8]);
						moves[ID_to_int(ID)] = min(int(moves[ID_to_int(ID)]), moves[i] + 1);
						swap(ID[j], ID[(j + 4) % 8]);
						if(j % 4 != 0){
							swap(ID[j], ID[j - 1]);
							moves[ID_to_int(ID)] = min(int(moves[ID_to_int(ID)]), moves[i] + 1);
							swap(ID[j], ID[j - 1]);
						}
						if(j % 4 != 3){
							swap(ID[j], ID[j + 1]);
							moves[ID_to_int(ID)] = min(int(moves[ID_to_int(ID)]), moves[i] + 1);
							swap(ID[j], ID[j + 1]);
						}
					}
				}
			}
		}while(next_permutation(ID, ID + 8));
		//cout << count << endl;
	}
	
	while(true){
		
		for(int i = 0; i < 8; i++){
			cin >> ID[i];
		}
		
		if(cin.eof()){
			break;
		}
		
		cout << moves[ID_to_int(ID)] << endl;
		
	}
	return 0;
}