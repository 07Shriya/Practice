#include<iostream>
using namespace std;
class xyz
{
	private:
		double radius;
	public:
		double result(double r)
		{
			radius = r;
			return 3.14*radius*radius;
		}		
};
int main()
{
	xyz obj1;
	cout<<"The area of circle with radius 7 is "<<obj1.result(7);
	return(0);
}
