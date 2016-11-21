#include <bits/stdc++.h>
using namespace std;

int main()
{
	printf("Enter the last values\n");
	int end;
	cin>>end;
	printf("Enter no of blocks\n");
	int blocks;
	cin>>blocks;
	int count1[blocks];
	srand(time(NULL));
	int size = end/blocks;
	memset(count1,0,sizeof(count1));
	for (int i = 0; i < end; ++i)
	{
		int x = rand()%(end);
		//printf("%d\n", x);
		count1[x/(size)]++;
	}
	int e = size;
	int ans = 0;
	for (int i = 0; i < blocks; ++i)
	{
		ans += (count1[i]-e)*(count1[i]-e);
	}
	printf("%d\n", (ans)/(e));
}