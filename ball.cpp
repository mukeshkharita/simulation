#include <bits/stdc++.h>
#include <graphics.h>

int main(){
   int gd = DETECT,gm,maxx,maxy,a;
   int i, x ,y ,radius=10,f,velocity =80,theta = 45, GRAVITY = 9.8;
   float PI = 3.14,j;
   initgraph(&gd, &gm, NULL);
   /* Initialize center of circle with center of screen */
   maxx = getmaxx();
//   maxy = getmaxy();
  
//   scanf("%d",&f);
//   printf("%d",f);
    
   circle(100,300,radius); 	
   line(70,310,maxx,310);
   for(j=0;j<50;j++){
	
	i=0.5*j;
	printf("%f\n",300-(velocity*sin(theta*PI/180))*i+0.5*GRAVITY*(i*i));

	if(300-(velocity*sin(theta*PI/180))*i+0.5*GRAVITY*(i*i)>312)
	{	
		printf("Hello\n");
		break;
	}
	circle(100+(velocity*cos(theta*PI/180))*i,300-(velocity*sin(theta*PI/180))*i+0.5*GRAVITY*(i*i),radius);
	delay(100);
   }

   getch();
   closegraph();
   return 0;
}
