// Lab_03_2.cpp
// ������������ �������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 14
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// ����� 1: ������������ � ��������� ����
	if (((x + c) < 0) && (a != 0))
		F = (-a * x * x - b);
	if (((x + c) > 0) && (a == 0))
		F = ((x - a) / (x - c));
	else F = ((x / c) + (c / x));
	cout << endl;
	cout << "1)F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (((x + c) < 0) && (a != 0))
		F = (-a * x * x - b);
	else
		if (((x + c) > 0) && (a == 0))
			F = ((x - a) / (x - c));
		else F = ((x / c) + (c / x));
	cout << endl;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
