#include <iostream>
using namespace  std;
#define EP 0.00001
double solution(double x)
{
	return x*x*x-2*x-5;
}
void bisection(double a,double b)
{
	if(solution (a)*solution(b)>=0)
	{
		cout<<"You have not assumed right a and b \n";
		return;
	}
	double c=a;
	while((b-a)>=EP)
	{
		c=(a+b)/2;
		if(solution(c)==0.0)
		break;
		else if(solution(c)*solution(a)<0)
		b=c;
		else
		a=c;
	}
	cout<<"the value ofroot is : "<<c;
}
int main(){
	int a,b;
	cout <<"Enter the intervals: \n";
	cout<<"Lower limit: ";
	cin>>a;
	cout<<"Upper limit: ";
	cin>>b;
	bisection(a,b);
	return 0;
}
