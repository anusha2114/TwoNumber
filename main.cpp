#include <iostream>
using namespace std;
long long int maximum(long long int a, long long int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}
long long int minimum(long long int a, long long int b)
{
	if(a<b)
	{
		return a;
	}
	return b;
}

int main() {
	long long int t, a, b, n, max, min;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		if(n% 2== 1)
		{
			a=a*2;
		}
		max = maximum(a, b);
		min = minimum(a, b);
		cout<<max/min<<endl;
	}
	return 0;
}
