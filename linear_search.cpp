#include <iostream>
using namespace std;

int main()
{
	int arr[50],i,n;
	
	cout<<"enter number of elements : ";
	cin>>n;
	for(i=0;i<n;++i)
	{
		cout<<"enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	cout<<"your array is : ";
	for(i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	
	int target,flag,pos;
	flag=0;
	cout<<"\nenter the element you want to search : ";
	cin>>target;
	for(i=0;i<n;++i)
	{
		if(target==arr[i])
		{
			flag=(flag+1);
			pos=(i+1);
		}
		else
		{
			continue;
		}	
	}
	if (flag>0)
	{
		cout<<"element found at position "<<pos;
	}
	else
	{
		cout<<"element not found";
	}

}
