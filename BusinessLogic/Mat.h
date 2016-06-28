#ifndef MAT_H
#define MAT_H

//#include "Mat.h"

class Mat
{
	private:	

	public:
		int Add(int x, int y);
		double Square(double x);
		int ReturnNumber(void);
		Mat(void) {}
};

int Mat::ReturnNumber()
{
	return 123;
}

double Mat::Square(double x)
{
	return x*x + 1 - 1;
}

int Mat::Add(int x, int y)
{
	return x + y + 1 ;
}

#endif