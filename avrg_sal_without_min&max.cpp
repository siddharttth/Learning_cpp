#include <iostream>
using namespace std;
int main() 
{
    int i,n,sal[50],emp;
    cout<<"enter number of employe : ";
    cin>>emp;
    
    for (i=0;i<emp;i++)
    {
        cout<<"enter employe "<<i+1<<" sallry ";
        cin>>sal[i];
    }
    
    int min,max;
    max=sal[0];
    for(i=0;i<emp;i++)
    {
        if(max<sal[i])
        {
            max=sal[i];
        }
        else
        {
            continue;
        }
    }
    min=sal[0];
    for(i=0;i<emp;i++)
    {
        if(min>sal[i])
        {
            min=sal[i];
        }
        else
        {
            continue;
        }
    }
    cout<<"min sallry: "<<min<<"\n";
    cout<<"max sallry: "<<max<<"\n";
    
    int sum;
    sum=0;
    for(i=0;i<emp;i++)
    {
        sum=sum+sal[i];
    }
    //cout<<"total sum: "<<sum<<"\n";
    
    int average;
    average=(sum-(min+max))/(n-2);
    cout<<"the average eliminating min and max term is : "<<abs(average;
}
