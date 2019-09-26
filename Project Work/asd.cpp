#include <iostream>
using namespace std;

class P{
	int piv;
	
	public:
		P(int k):piv(k){}
	
	protected:
		int getPiv() {return piv;}
};

class C: public P {
	int piv;
	public:
		C(int k): P(k), piv(-1){}
		void f(){
			cout<<piv<<endl;
			cout<<getPiv()<<endl;
		}
};

int main(){
	
	P p(1);
	C c(2);
	cout << sizeof(p) << endl;
	cout << sizeof(c) << endl;
	
}
