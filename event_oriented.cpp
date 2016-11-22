#include <bits/stdc++.h>
using namespace std;

int main()
{
	float r,iat,mue = 1/6.0,lembda = 1/5.0,run = 20;
	float clock1 = 0,se = 0,sb = 0,nat = 0,cit = 0,cwt = 0,st = 0,it = 0,wt = 0;
	int q = 0,cq = 0,count = 0,qmax = 0;
	printf("\nclock1     IAT     NAT     QUE     SB     ST     SE     IT     WT     CIT     CWT\n");
	srand(time(NULL));
	r = rand()/(RAND_MAX*1.0);
	iat = (-1/mue)*log(1-r);
	nat += iat;
	count++;
	while(clock1<run)
	{
		if(q>qmax)
			qmax = q;
		printf("%7.2f %7.2f %7.2f %d %7.2f %7.2f %7.2f %7.2f %7.2f %7.2f %7.2f \n",clock1,iat,nat,q,sb,st,se,it,wt,cit,cwt);
		if(nat >= se)
		{
			if(q>0)
			{
				wt = q*(se-clock1);
				cwt += wt;
				q--;
				clock1 = se;
			}
			else
			{
				clock1 = nat;
				r = rand()/(RAND_MAX*1.0);
				iat = (-1/mue)*log(1-r);
				nat += iat;
				count+=1;
			}
			sb = clock1;
			it = clock1-se;
			cit = cit + it;
			r = rand()/(RAND_MAX*1.0);
			st = (-1/lembda)*log(1-r);
			se = sb+st;
		}
		else
		{
			wt = q*iat;
			cwt += wt;
			clock1 = nat;
			q++;
			r = rand()/(RAND_MAX*1.0);
			iat = (-1/mue)*log(1-r);
			nat += iat;
			count++;
		}
	}
	printf("\nElapsed Time = %7.2f minuets, Number of arrivals %d \n",clock1,count);
	printf("AWT: %7.2f\n", cwt/count*1.0);
	float pcu = (cit*100.0/clock1);
	printf("Percentage Server idle time: %7.2f\n",pcu);
	printf("QMAX: %d\n", qmax);
}
