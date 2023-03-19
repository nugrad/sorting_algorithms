#include<iostream>
using namespace std;
int main(){

int arr[6]={99,33,66,11,88,2};
	int temp;
	cout<<"before sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
	int gap;
	for(gap=6/2;gap>0;gap/=2)
	{
		for(int j=gap;j<6;j++)
		{
			temp=arr[j];
			int i=0;
			for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap)
			{
				arr[i]=arr[i-gap];
			}
			arr[i]=temp;
		}
	}
	cout<<"after sorting : ";
	for(int i=0;i<6;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
