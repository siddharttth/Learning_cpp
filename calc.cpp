#include <iostream>
using namespace std;

int main() 
{
    int x,y,sum;
    char opr;
    cout<<"enter 1st number : ";
    cin>>x;
    cout<<"enter operator : (+,-,*,%,/) ; ";
    cin>>opr;
    cout<<"enter 2nd number : ";
    cin>>y;
    
    if (opr == '+')
    {
        sum=x+y;
        cout<<"your answer is : ";
        cout<<sum;
    }
        
    else if (opr=='-')
    {
        sum=x-y;
        cout<<"your answer is : ";
        cout<<sum;
    }
    
    else if (opr=='*')
    {
        sum=x*y;
        cout<<"your answer is : ";
        cout<<sum;
    }
    
    else if (opr=='/')
    {
        sum=x/y;
        cout<<"your answer is : ";
        cout<<sum;
    }
    
    else if (opr=='%')
    {
        sum=x%y;
        cout<<"your answer is : ";
        cout<<sum;
    }
    
    else
    {
        cout<<"enter a valid opr !!\n";
    }
}
