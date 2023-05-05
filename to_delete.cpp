
#include <iostream>
using namespace std;
  
int main()
{
    int input[50], output[50], count, i;
      
    cout << "Enter number of elements in array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i=0; i<count; i++)
	{
        cin >> input[i];
    }

    for(i=0; i<count; i++)
	{
        output[i] = input[count-i-1];
    }    
    
    cout<< "Your Array\n";
    for(i=0;i<count;i++)
    {
    	cout<<input[i]<<" "<<endl;
    	
	}

    cout << "Reversed Array\n";
    for(i=0; i<count; i++)
	{
        cout << output[i] << " "<<endl;
    }
    
    cout<<"Spiral Array\n";
    for(i=0;i<count/2;i++)
    {
    	cout<<input[i]<<" "<<endl;
    	for(i=0; i < count/2; i++)
		{
	        cout << output[i] << " "<<endl;
	        break;
	    }
	    break;
	}
    
          
    return 0;
}
