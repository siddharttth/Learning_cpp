#include <iostream>
using namespace std;

int main()
{
    int arr[50],t;
    
    cout<<"enter number of elements : ";
    cin>>t;
    
    int i,n;
    for(i=0;i<t;++i)
    {
        cout<<"\nenter value "<<(i+1)<<": ";
        cin>>arr[i];
    }
    
    cout<<"\nthe numbers are : ";
    for(i=0;i<t;++i)
    {
        cout<<arr[i]<<" ";
    }
    
    int a,sum=0;
    for(i=0;i<t;++i)
    {
        sum=(sum+arr[i]);
    }
    cout<<"\n\nthe sum of the numbers are "<<sum;
}

