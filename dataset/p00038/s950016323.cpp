#include<cstdio>
#include<algorithm> 
using namespace std; int main(void)
{     
	int card[5];
	char kari;     
	while(1)     
	{         
		for(int i = 0;i < 5;i++)         
		{             
			if(scanf("%d",&card[i])== EOF) goto kitune;             
			if(i < 4)scanf("%c",&kari);         
		}		
		int cnt = 0,check[15] = {0};
		sort(card,card+5);         
		for(int i = 0;i<5;i++)         
		{             
			check[card[i]]++;             
			if(card[i] == 1) check[14] += 1;         
		}         
		for(int i = 0;i<=14;i++) 
		{             
			if(check[i] == 1)
			{                 
				if(check[i+1] == 1)                  
				{                     
					cnt++;                     
					if(cnt == 4) break;              
				}                 
				else cnt = 0;             
			}         
		}           
		int pair = 0;         
		int three = 0;         
		int four = 0;         
		int st = 0;         
		if(cnt == 4)         
		{             
			printf("straight\n");             
			st = 1;
		}         
		else       
		{             
			for(int i = 0;i < 14;i++)     
			{              
				if(check[i] == 2) pair++;  
				else if(check[i] == 3) three++;    
				else if(check[i] >= 4) four++;   
			}     
		}

		if(pair >= 1)     
		{  
			if(three == 1) printf("full house\n");     
			else if(pair == 2) printf("two pair\n");    
			else printf("one pair\n");   
		}       
		else if(three >= 1)    
		{        
			if(pair == 1) printf("full house\n"); 
			else if(three == 2) printf("full house\n");   
			else printf("three card\n");     
		}         
		else if(four >= 1) printf("four card\n");  
		else if(st != 1) printf("null\n");   
	}    
	kitune: 
	return 0; 
}