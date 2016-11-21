#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,m,nn;
	float t,sum,n,mue1,sigma;
	printf("Enter value of mue1 and sigma\n");
	cin>>mue1>>sigma;
	printf("Enter no of variable to be generated\n");
	cin>>nn;
	m = RAND_MAX;
	srand(time(NULL));
	for (int i = 0; i < 12; ++i)
	{
		sum = 0;
		for (int j = 1; j <= 12; ++j)
		{
			n = rand()/32768;
			sum+=n;
		}
		t = mue1 + sigma * (sum-6);
		printf("%.2f\n", t);
	}
}
/*
3 5
6
*/