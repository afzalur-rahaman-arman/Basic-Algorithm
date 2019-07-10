
#include <iostream>
using namespace std;

int main()
{ 
while(1)//---used eof---// 	
  { 
  
   int i,amount,item,array[1000];  

   cin>>amount;//---Enter amount of array---//  	

   for(i=0;i<amount;i++)  	
   cin>>array[i];//---Enter the value of array---//  	

   cin>>item;//---Enter the value which you wanted---//  	
   
   for(i=0;i<amount;i++)  
   {   	
     if(item==array[i])   	
      {   	
      cout<<array[i]<<" Found and its location is "<<i+1<<".\n";   	
      break;   
      }  	
    }   	
     if(item!=array[i])    	
     cout<<"Not found.\n"; 
  }
}
