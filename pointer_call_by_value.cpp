//Prashant
//230701230102
//call by value 
#include <iostream>
using namespace std;
void swap (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swap a: "<<a<<" b: "<<b<<endl;
}

int main()
{
   int a=4,b=6;
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap(a,b);
   cout<<"After swap a:"<<a<<" b:"<<b<<endl;
    return 0;
}
