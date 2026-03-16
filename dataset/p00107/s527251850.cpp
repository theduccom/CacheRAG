#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#define PI 3.14159265358979323846264

using namespace std; 



int main(void){

	int n;
	double v,box_area[5],height,width,depth,min_area;
	
	vector<double> hole;
	vector<double> hole_area;
	
	while(1){
	
		height=0;
		width=0;
		depth=0;
		n=0;
		min_area=0;
		
		hole.clear();
		
		hole_area.clear();

		for(int i=0;i<5;i++){
			box_area[i]=0;
		}
		
		scanf("%lf %lf %lf",&height,&width,&depth);
		
		if(height==0 && width==0 && depth==0){
			break;
		}
		
		scanf("%d",&n);

		for(int i=0;i<n;i++){
			cin>>v;
			hole.push_back(v);
		}

		for(int i=0;i<n;i++){
			hole_area.push_back(hole[i]*2.0);
			//printf("hole_area[%d]=%lf\n",i,hole_area[i]);
		}

		box_area[0]=sqrt(1.0*height*height+1.0*width*width);	//¼ûÌÌ3ÊÌ»ê¼êÌÎpü
		box_area[1]=sqrt(1.0*height*height+1.0*depth*depth);
		box_area[2]=sqrt(1.0*width*width+1.0*depth*depth);

		/*for(int i=0;i<3;i++){
			printf("box_area[%d]=%lf\n",i,box_area[i]);
		}
		printf("hei=%lf wid=%lf dep=%lf\n",height,width,depth);*/
		
		min_area=min(box_area[0],min(box_area[1],box_area[2]));
		
		//printf("¼ûÌÌÅ¬ÊÏÍ:%lf\n",min_area);

	
		for(int i=0;i<n;i++){
			
			if(hole_area[i]>min_area){
				printf("OK\n");			
			}
			else{
				printf("NA\n");	
			}
		}
	}
	return 0;
}