#include<stdio.h>
#include<stdbool.h>
//declare function                                                              
bool judgelpyear(int fstyear,int lastyear);

/*==============end of delaration====================================*/

int main(void){
    int fstimp;//first imput                                                    
    int secimp;//second imput                                                   
    do {
        scanf("%d %d", &fstimp, &secimp);
    }while(judgelpyear(fstimp, secimp) == true);
    return 0;
}

bool judgelpyear(int fstyear,int lastyear) {
    static bool judgefst;
    bool discovery = false;//if he can discover a leap year                     

    if(fstyear == 0 && lastyear == 0){
        return false;//end main                                                 
    }
    if(judgefst == true) {//make a space between outputs                        
        printf("\n");
    }

    for(int i = fstyear; i <= lastyear; i++) {
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            printf("%d\n", i);
            discovery = true;//he discovered at least one leap year             
        }
    }
    if(discovery == false) {
        printf("NA\n");
    }

    judgefst = true;//he did this function at least one time                    
    return true;//repeat scanning years                                         
}