//Prshant
//23070123102
//accessing array elements from pointers 
#include <iostream>
using namespace std;
int main()
{
   int *ptr,i;
  int  a[5]={10,20,30,40,50};
   ptr=&a[0]; //pointing to the 1st element of array 
  // cout<<ptr;
  // *ptr=a;
  cout<<"The value of array without pointer are: "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<"Element "<<i<<"= "<<a[i]<<endl;
   }
   cout<< "The elements of array with using pointer "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<"Element "<<i<<"= "<<*ptr<<endl;
       ptr++;
   }


//Another way for accessing array 
cout<< "The elements of array with using pointer "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<"Element "<<i<<"= "<<*(a+i)<<endl;
       ptr++;
   }
    return 0;
}
