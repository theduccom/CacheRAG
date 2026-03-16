/* AOJ 0038*/

#include<iostream>
#include<queue>

using namespace std;

void Swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BabbleSort(int *data,int n){

	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(data[j] <= data[j-1]){
				Swap(&data[j],&data[j-1]);
			}
		}
	}

}

//onePair or threeCards or fourCards
int isSameCard(int *data){
	
	int tmp[13];

	for(int i=0;i<13;i++){
		tmp[i] = 0;
	}

	for(int i=0;i<5;i++){
		tmp[data[i]-1]++;
	}

	BabbleSort(tmp,13);

	if(tmp[12]==3 && tmp[11] == 2){
		return 6;//フルハウス
	}
	else if(tmp[12] == 4){
		return 7;//フォーカード
	}
	else if(tmp[12] == 3){
		return 4;
	}
	else if(tmp[12] == 2 && tmp[11] == 2){
		return 3;
	}
	else if(tmp[12] == 2){
		return 2;
	}
	else{
		return 1;
	}
}

int isStraight(int *data){
	
	int tmp[13];

	for(int i=0;i<13;i++){
		tmp[i] = 0;
	}

	for(int i=0;i<5;i++){
		tmp[data[i]-1]++;
	}

	if(tmp[9] == 1 && tmp[10] == 1 && tmp[11] == 1 && tmp[12]==1 && tmp[0]==1){
		return 5;
	}
	else{
		for(int i=0;i<=13-5;i++){
			if(tmp[i]==1&&tmp[i+1]==1&&tmp[i+2]==1&&tmp[i+3]==1&&tmp[i+4]==1){
				return 5;
			}
		}
	}

	return 1;
}

int main(){

	int data[5];
	char tmp;

	queue<int> ans;

	while(cin>>data[0]){
		if(data[0]==0){
			break;
		}
		cin>>tmp;
		cin>>data[1];
		cin>>tmp;
		cin>>data[2];
		cin>>tmp;
		cin>>data[3];
		cin>>tmp;
		cin>>data[4];

		BabbleSort(data,5);

		if(isSameCard(data)>=2){
			ans.push(isSameCard(data));
		}
		else{
			ans.push(isStraight(data));
		}

	}

	int size=ans.size();

	for(int i=0;i<size;i++){
		switch(ans.front()){
		case 7:
			cout<<"four card"<<endl;
			break;
		case 6:
			cout<<"full house"<<endl;
			break;
		case 5:
			cout<<"straight"<<endl;
			break;
		case 4:
			cout<<"three card"<<endl;
			break;
		case 3:
			cout<<"two pair"<<endl;
			break;
		case 2:
			cout<<"one pair"<<endl;
			break;
		case 1:
			cout<<"null"<<endl;
			break;
		}
		ans.pop();
	}

	return 0;
}