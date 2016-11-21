#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,x,y,z,nd;
	int seed1;
	printf("Enter seed1\n");
	cin>>seed1;
	printf("How many random no generate\n");
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		x = seed1*seed1;
		x = x/100;
		x = x %10000;
		seed1 = x;
		printf("%d\n",x);
	}
}