#include<cstdio>
#define REP(i,n) for(int i=0;i<(int)(n);i++)

void hoge(int* a){
  int cards[13]{0};
  REP(i,5) cards[a[i]-1]++;
  REP(i,13){
    if(cards[i]==4){
      puts("four card");
      return;
    }
  }
  REP(i,13){
    if(cards[i]==3){
      REP(j,13){
	if(cards[j]==2){
	  puts("full house");
	  return;
	}
      }
      puts("three card");
      return;
    }
  }
  REP(i,13){
    if(cards[i]==2){
      for(int j=i+1;j<=13;j++){
	if(cards[j]==2){
	  puts("two pair");
	  return;
	}
      }
      puts("one pair");
      return;
    }
  }
  REP(i,13){
    if(cards[i]==1){
      if(cards[i+1]==1&&
	 cards[i+2]==1&&
	 cards[i+3]==1&&
	 cards[i+4]==1){
	puts("straight");
	return;
      }
    }
  }
  if(cards[0]==1&&
     cards[9]==1&&
     cards[10]==1&&
     cards[11]==1&&
     cards[12]==1){
    puts("straight");
    return;
  }
  puts("null");
  return;
}

int main(){
  int a[5];
  while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])>0){
    hoge(a);
  }
}