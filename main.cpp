#include "MyClass.h"

int main(void)
{
	Rectangle Rect; //Definitely Rect OBJECT
//	int area;

	Rect.setWidth(5);//调用BASE-CALSS的成员函数赋值
	Rect.setHeight(7);

//	area = Rect.getArea();

	//Output object's area
	cout << "Total area:" << Rect.getArea() << endl;//调用派生类的成员函数

	cout << "Total panit cost:" << Rect.getCost(Rect.getArea()) << endl;

	system("Pause");
	return 0;
}