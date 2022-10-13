#include <iostream>
using namespace std;
 
int main()
{
int base,expo,i; //declaring variables
long power=1;
 
cout<<"Enter base  :";
cin>>base; //taking base
 
cout<<"\nEnter Exponent :";
scanf("%d",&expo); //  taking power
 
for(i=1;i<=expo;i++) // traverse the loop till exponent
{
power *= base;//power=power*base // multiplying base with power
}
cout<<"Result "<<power; // required output
return 0;
}
