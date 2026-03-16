#include<bits/stdc++.h>

using namespace std;

int main(){

  vector<int> card(5);
  
  while(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) != EOF){
	bool judge_1p = false;
	bool judge_2p = false;
	bool judge_3 = false;
	bool judge_4 = false;
	bool judge_s = false;

	sort(card.begin(),card.end());
	
	for(int i=0;i<4;++i){
	  int count = 1;
	  for(int j=i+1;j<5;++j){
		if(card[i] == card[j]){
		  count++;
		  if(j == 4)
			i = j - 1;
		}
		else{
		  i = j - 1;
		  break;
		}
	  }
	  
	  if(count == 2){
		if(judge_1p == false)
		  judge_1p = true;
		else if(judge_1p == true)
		  judge_2p = true;
	  }
	  else if(count == 3)
		judge_3 = true;
	  else if(count == 4)
		judge_4 = true;
	  
	}

	if(card[0] == 1 && card[1] == 10 &&
	   card[2] == 11 && card[3] == 12 &&
	   card[4] == 13){
	  cout<<"straight"<<endl;
	  continue;
	} 
	
	for(int i=0;i<4;++i){
	  if(card[i] == card[i+1] - 1 && i == 3)
		judge_s = true;
		
	  else if(card[i] != card[i+1] - 1)
		break;
	}

	if(judge_4 == true)
	  cout<<"four card"<<endl;
	else if(judge_3 == true && judge_1p == true)
	  cout<<"full house"<<endl;
	else if(judge_3 == true)
	  cout<<"three card"<<endl;
	else if(judge_2p == true)
	  cout<<"two pair"<<endl;
	else if(judge_1p == true)
	  cout<<"one pair"<<endl;
	else if(judge_s == true)
	  cout<<"straight"<<endl;
	else
	  cout<<"null"<<endl;
  }
  
}

