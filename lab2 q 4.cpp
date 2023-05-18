#include<iostream>
#include<cmath>
#include<algorithm>
#include<ctime>
#include<time.h>

using namespace std;

int main()
{
	double time;
	clock_t start, finish;
	long a = 0;
	int n = 2500, A;
	
	start = clock();
	for(int i = 1; i<=n; i++)
        for(int k = i;k<=n; k++)
                A <= A+1;
	finish = clock();
	time=(((finish-start)/(double)CLOCKS_PER_SEC));
	
	cout<<time<<endl;
	return 0;
	
}
