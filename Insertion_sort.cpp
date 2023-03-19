#include<iostream>
using namespace std;
int main()
{
	int arr[6]={12,2,10,4,8,6};
	int temp;
	cout<<"before sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
	for(int i=0;i<6;i++)
	{
		temp=arr[i];
		int j=i-1;
		while(j>=0 &&temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"after sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
	
	
}
