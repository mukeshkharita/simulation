#include <bits/stdc++.h>
#include <graphics.h>
#include <math.h>
#include <time.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);

	srand(time(NULL));
	int n,randomx,randomy,i,m=0,l;
	rectangle(100,100,200,200);
	circle(100,200,100);
	printf("how many simulation: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		l++;
		randomx = rand()%100+100;				//for calculations
		randomy = rand()%100+100;				//for calculations
//		printf("%d %d\n",randomx,randomy);

		int z=randomy-100;
		int randomyy=200-z;						//for plotting of graph

		float xx,yy,rr;
		xx=(randomx-100)*(randomx-100);
		yy=(200-randomyy)*(200-randomyy);
		rr=100*100;
		if(xx+yy<=rr){
			m++;
			setcolor(WHITE);
//			printf("gotcha\n");
			circle(randomx,randomyy,1);
		}
		else{
			setcolor(RED);
//			printf("break\n");
			circle(randomx,randomyy,1);
		}
		delay(100);
	}
	float res = (m/(float)l)*4/(float)(1*1);
	printf("Value of PI: %f",res);
//	gettextxy(200,300,res);
	
	getch();
	closegraph();
}