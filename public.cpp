#include<iostream>
using namespace std;
class xyz
{
	public:
		double radius;
		double result()
		{
			return 3.14*radius*radius;
		}		
};
int main()
{
	xyz obj1;
	obj1.radius=7;
	cout<<"The area of circle with radius 7 is "<<obj1.result()<<endl;
	return(0);
}
