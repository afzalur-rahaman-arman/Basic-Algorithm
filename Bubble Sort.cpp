#include <iostream>
using namespace std; 

int main()
{ 	
while(1) 	
 {  	
int num,i,j,temp,array[1000];  

cin>>num;       

for( i=1;i<=num;i++) 	
cin>>array[i];    	

for( i=num;i>0;i--) 	
  {  	
    for	(j=0;j<i;j++)  	
    {   	
     if(array[i]<array[j+1])    	
     {         
      temp=array[j+1];     	
      array[j+1]=array[i];     	
      array[i]=temp;    	
     }  	
    } 	
   } 	
   
   for( i=1;i<=num;i++)    
   cout<<array[i]<<" ";     	
   
   cout<<endl; 	
 }
}
