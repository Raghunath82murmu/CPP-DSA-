#include<iostream>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	int b[5];
	for(int i=0;i<=4;i++)
	{
		b[i]=a[i];
		cout<<a[i]<<" ";
	}
	for(int i=0;i<=4;i++)
	{
		cout<<b[i]<<" ";
	}
//	cout<<b[5];

	return 0;
}