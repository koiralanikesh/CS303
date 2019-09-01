#include <iostream>
int main()
{
//introducing the integers
int n, y1, y2;
//initiating a forloop to check the comparison with increment of 10
for(n=0;n<=100;n=n+10)
{
y1=100*n+10;
y2=5*n*n+2;
//comparing the value of y1 and y2
if(y1>y2)
std::cout<<"y1 is greater than y2 for n = "<<n<<"\n";
else if(y1<y2)
std::cout<<"y1 is less than y2 for n = "<<n<<"\n";
else if(y1==y2)
std::cout<<"y1 and y2 are equal for n = "<<n<<"\n";
}
return 0;
}