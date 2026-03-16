#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    double xa,ya,ra,xb,yb,rb;
    double dx,dy,dr;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%lf %lf %lf", &xa, &ya, &ra);
        scanf("%lf %lf %lf", &xb, &yb, &rb);
        dx = xa - xb;
        dy = ya - yb;
        dr = sqrt(dx*dx + dy*dy);
        
        if (dr > ra + rb){
            printf("0\n");
        } else if (dr + ra < rb){
            printf("-2\n");
        } else if (dr + rb < ra){
            printf("2\n");
        } else {
            printf("1\n");
        }
    }
    
    return 0;
}