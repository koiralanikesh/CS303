#include <iostream>
int main()
{
//variable declaration
int n, y1, y2;
for (n=0; n<=100; n=n+10)
{
	y1=100*n+10;
	y2=5*n+2;
	//Comparing the values y1 with y2
if (y1>y2)
	std::cout<<"The value of y1 is greater than y2 when n is "<<n<<"\n";
else if (y1==y2)
	std::cout<<"The value of y1 is equal to y2 when n is "<<n<<"\n";
else if (y1<y2)
	std::cout<<"The value of y1 is less than y2 when n is "<<n<<"\n";
}
return 0;
}