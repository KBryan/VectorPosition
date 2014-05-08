#include <iostream>

class Vector
{
public:
	float length() const;
	float x , y;
};

class Point
{
public:
	Point AddVector(Vector v);
	float x , y;
};

float Vector::length() const
{
	float length;
	length = sqrt(x*x + y*y);
	return length;
}
Vector operator-(Point a, Point b)
{
	Vector v;
	v.x = a.x - b.x;
	v.y = a.y - b.y;

	return v;
}
Point Point::AddVector(Vector v)
{
	Point p2;
	p2.x = x + v.x;
	p2.y = y + v.y;

	return p2;
}

int main()
{
	Point p; //<1,0>
	p.x = 1;
	p.y = 0;

	Point i;
	i.x = 1;
	i.y = 1;

	Vector v;

	v = p - i;

	float length = v.length(); 

	std::cout << "Result: "<< length << "\n";

	return 0;

}