#include "MyClass.h"

int main(void)
{
	Rectangle Rect; //Definitely Rect OBJECT
//	int area;

	Rect.setWidth(5);//����BASE-CALSS�ĳ�Ա������ֵ
	Rect.setHeight(7);

//	area = Rect.getArea();

	//Output object's area
	cout << "Total area:" << Rect.getArea() << endl;//����������ĳ�Ա����

	cout << "Total panit cost:" << Rect.getCost(Rect.getArea()) << endl;

	system("Pause");
	return 0;
}