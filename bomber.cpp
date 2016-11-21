#include <bits/stdc++.h>
using namespace std;

int  main()
{
	float tlimit = 12;
	float xf[20],yf[20],dist,a,b,x,y;
	float s = 20.0;
	float xb[] = {100,110,120,10,10,149,158,168,179,188,198,209,219,226,234,240};
	float yb[] = {0,3,6,10,15,20,26,32,37,34,30,27,23,19,16,14};
	xf[0] = 0;
	yf[0] =60.0;
	int i;
	for (i = 0; i <= 12; ++i)
	{
		dist = sqrt(pow(yb[i]-xb[i],2)+pow(yf[i]-xf[i],2));
		printf("%d %f\n", i,dist);
		if(i>tlimit)
			printf("Target Escaped\n");
		if(dist<=10)
			break;
		else
		{
			xf[i+1] = xf[i] + s*((xb[i]-xf[i]))/dist;
			yf[i+1] = yf[i] + s*((yb[i]-yf[i]))/dist;
		}
	}
	printf("%d %5.2f\n", i,dist);
	return 0;
}