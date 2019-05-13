// date5.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CTestCopy {
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void display();
	~CTestCopy();
};
CTestCopy::CTestCopy() {
	x = 0;
	y = 0;
	cout << "默认构造函数 x=" << x << "  y=" << y << endl;
}
CTestCopy::~CTestCopy() {
	cout << "析构函数 x=" << x << "  y=" << y << endl;
}
CTestCopy::CTestCopy(int a, int b) {
	x = a;
	y = b;
	cout << "构造函数 x=" << x << "  y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy & om) {
	x = om.x * 2;
	y = om.y * 2;
	cout << "复制构造函数 x=" << x << "  y=" << y << endl;
}
void CTestCopy::setXY(int a, int b) {
	x = a;
	y = b;
}
void CTestCopy::display() {
	cout << "display  x=" << x << "  y=" << y << endl;
}
void myTest() {
	CTestCopy om;
	om.display();
}
int main()
{
	CTestCopy ot(100, 200);
	ot.display();
	myTest();
	return 0;
}

