#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		Rectangle( int l, int b )
		{
			length = l;
			breadth = b;
		}
		int printArea()
		{
			return length * breadth;
		}
};

class Square
{
	public:
		int side;
		Square( int a )
		{
			side=a;
		}
		int printArea()
		{
			return side*side;
		}
};

int main()
{
	Rectangle rt1( 7, 4 );
	Square sq1( 4 );
	cout << "Area of Rectangle: " << rt1.printArea() << endl;
	cout << "Area of Square: " << sq1.printArea() << endl;
	return 0;
}