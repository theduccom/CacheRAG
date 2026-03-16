#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int cs[5];
    while(scanf("%d,%d,%d,%d,%d",&cs[0],&cs[1],&cs[2],&cs[3],&cs[4])!=-1){
        sort(cs,cs+5);
        if((cs[0]==cs[1] && cs[1]==cs[2] && cs[2]==cs[3]) || (cs[1]==cs[2] && cs[2]==cs[3] && cs[3]==cs[4])) printf("four card\n");
        else if((cs[0]==cs[1] && cs[2]==cs[3] && cs[3]==cs[4]) || (cs[0]==cs[1] && cs[1]==cs[2] && cs[3]==cs[4])) printf("full house\n");
        else if(cs[0]==1 && cs[1]==10 && cs[2]==11 && cs[3]==12 && cs[4]==13) printf("straight\n");
        else if(cs[0]==cs[1]-1 && cs[1]==cs[2]-1 && cs[2]==cs[3]-1 && cs[3]==cs[4]-1) printf("straight\n");
        else if((cs[0]==cs[1] && cs[1]==cs[2]) || (cs[1]==cs[2] && cs[2]==cs[3]) || (cs[2]==cs[3] &&cs[3]==cs[4])) printf("three card\n");
        else{
            int ps=0;
            if(cs[0]==cs[1]) ps++;
            if(cs[1]==cs[2]) ps++;
            if(cs[2]==cs[3]) ps++;
            if(cs[3]==cs[4]) ps++;
            if(ps==2) printf("two pair\n");
            else if(ps==1) printf("one pair\n");
            else printf("null\n");
        }
    }
}