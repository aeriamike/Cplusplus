#include "fraction.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	
	Fraction a(4, 5);	// The fraction a is 4/5
	Fraction b(8, 9);	// The fraction b is 8/9
	
	//Basic operations
	cout<<"The followings are arithmetic operations of fraction a and b, "<<endl;
	Fraction c = a + b;
	Fraction d = a - b;
	Fraction e = a * b;
	Fraction f = a / b;
	
	cout<<"The sum of a and b is: "<<(double)c;
	cout<<endl;
	cout<<"The difference of a and b is: "<<(double)d;
	cout<<endl;
	cout<<"The product of a and b is: "<<(double)e;
	cout<<endl;
	cout<<"The quotient of a and b is: "<<(double)f;
	cout<<endl;
	
	// Relations operations
	cout<<"The following operations are to compute the relation between fraction a and b, "<<endl;
	cout<<"giving the corresponding the results of 1 as True or 0 as False)"<<endl;
	
	int compareOne = operator < (a, b);
	cout<<"Is the value of a greater than that of b? "<< compareOne;
	cout<<endl;
	
	int compareTwo = operator <= (a,b);
	cout<<"Is the value of a greater than of equal to that of b? "<< compareTwo;
	cout<<endl;
	
	int compareThree = operator == (a,b);
	
	cout<<"Is the value of a equal to that of b? "<< compareThree;
	cout<<endl;
	
	int compareFour = operator != (a,b);
	
	cout<<"Is the value of a not equal to that of b? "<< compareFour;
	cout<<endl;
	
	int compareFive = operator >= (a,b);
	
	cout<<"Is the value of a lesser than or equal to that of b? "<< compareFive;
	cout<<endl;
	
	int compareSix =  operator > (a,b);
	
	cout<<"Is the value of a lesser than that of b? "<< compareSix;
	cout<<endl;
	
	system("pause");
	return 0;
}
