#include <iostream>
using namespace std;
int main()
{
	while(1)
 {
	float num;
	cin>>num;
	float high=num;
	float low=0.0,mid;
	while(high-low>0.00001)
	{
		mid=(high+low)/2;
		if(mid*mid>num)
		{
			high=mid;
		}
		if(mid*mid<num)
		{
			low=mid;
		}
	}
		cout<<"SQRT= "<<mid;
  }
}
	
