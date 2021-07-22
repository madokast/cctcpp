#include <stdio.h>

class P2{
	public:
		double x,y;
		P2(double _x,double _y) :x(_x), y(_y) {}
		
};

class P3{
	public:
		double x,y,z;
};

int main() {
	P2* p = new P2(1,2);

	return 0;
}