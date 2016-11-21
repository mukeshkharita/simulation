#include <bits/stdc++.h>
using namespace std;

int main()
{
	int kk,run = 20;
	float x,iat,st,awt,pcu,wt =0,it  = 0;
	float mean = 10,sd = 1.5,mue = 9.5,sigma = 1;
	float sb = 0,se = 0,cit = 0,cat = 0,cwt = 0;
	srand(time(NULL));
	for (int i = 0; i < run; ++i)
	{
		float sum = 0;
		for (int i = 0; i < 12; ++i)
		{
			x = rand()*1.0/RAND_MAX*1.0;
			sum += x;
		}
		iat = mean + sd * (sum-6);
		cat += iat;
		printf("%.2f %.2f\n", iat,cat);
		if(cat <= se)
		{
			sb = se;
			wt = se-cat;
			cwt += wt;
		}
		else
		{
			sb = cat;
			it = sb-se;
			cit += it;
		}

		sum = 0;
		for (int i = 0; i < 12; ++i)
		{
			x = rand()*1.0/RAND_MAX*1.0;
			sum += x;
		}
		st = mue + sigma * (sum-6);
		se = sb + st;
		printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", iat,cat,sb,st,se,cwt,cit);
	}
	awt = cwt / run;
	pcu = (cat-cit)*100.0/cat;
	printf("Average Waiting Time %f\n", awt);
	printf("Percentage Capacity Utilisation %f \n",pcu );
}