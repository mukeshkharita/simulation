#include <bits/stdc++.h>
#include <graphics.h>
int count1[7];
using namespace std;

int main(){
	int gd=DETECT,gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
 	
	srand(time(NULL));
	int n;
	printf("How many times you want to play: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		int a = rand()%6+1;
		count1[a]++;
		
	}
	for(int i=1;i<7;i++){
		printf("%d ",count1[i]);
	}

	line(100,300,500,300);
	line(100,300,100,100);
	outtextxy(500,310,"Dice Number");
	outtextxy(70,80,"Frequency");
	outtextxy(150,310,"1");
	outtextxy(200,310,"2");
	outtextxy(250,310,"3");
	outtextxy(300,310,"4");
	outtextxy(350,310,"5");
	outtextxy(400,310,"6");
	outtextxy(80,270,"100");
	outtextxy(80,240,"200");
	outtextxy(80,210,"300");
	outtextxy(80,180,"400");
	outtextxy(80,150,"500");
	for(int i=1;i<7;i++){
		rectangle(100+50*i,300,100+50*i+10,300-30.0*(float)count1[i]/100);
	}

	getch();
   	closegraph();
   	return 0;
	
}

