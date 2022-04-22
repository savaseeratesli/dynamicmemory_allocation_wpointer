#include <iostream>

using namespace std;

class Example
{
public:
	int x, y;

	Example(int mainX = 0,int mainY=0)
	{
		this->x = mainX;
		this->y = mainY;
		this->print();
		cout << "Const calisti.." << endl;
	}

	~Example()
	{
		cout << "Deconst calisti.." << endl;
	}

	void print()
	{
		cout << "X :" << x << " Y :" << y << endl;
	}

	Example addExample(Example& oth)
	{
		this->x += oth.x;
		this->y += oth.y;

		return *this;//Kendis nesnemireturn ediyorum
	}




};







