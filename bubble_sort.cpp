#include<iostream>
using namespace std;
void ascend(int arr[])
{
	int hold;
		cout<<"sort in ascending : ";
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				hold=arr[i];
				arr[i]=arr[j];
				arr[j]=hold;
			}
		}
	}
		for(int i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
	}
	
}
int main()
{
	int arr[5]={9,1,7,3,5};
	int hold;
	cout<<"before sorting : ";
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
	ascend(arr);
	cout<<"\n";

	cout<<"sort in decending : ";
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				hold=arr[i];
				arr[i]=arr[j];
				arr[j]=hold;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";

}
