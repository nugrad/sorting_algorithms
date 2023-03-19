#include<iostream>
using namespace std;
int main()
{
	int arr[6]={99,33,66,11,88,2};
	int temp;
	cout<<"before sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
	for(int i=0;i<6-1;i++)
	{
		int min=i;
		for(int j=i+1;j<6;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	cout<<"after sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
