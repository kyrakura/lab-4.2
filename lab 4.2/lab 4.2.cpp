// Lab_04_2.cpp
// < ��� ���� >
// ����������� ������ � 4.2
// ��������� �������, ������ ��������: ������� ���� �����.
// ������ 23
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B{}, y{};
	cout << "xp = "; cin >> xp;//��������� �������� x
	cout << "xk = "; cin >> xk;//������ �������� x
	cout << "dx = "; cin >> dx;//���� ���� x(���� �� ���������� x � �������, ��� ����� ����������������� �������)
	cout << fixed;
	//��������� �������
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = pow(x, 2) * sin((4 * x) / 3);
		if (x < -5)
			B = 1 / tan(x);
		else if (x >= -5 && x < 0)
			B = pow(x, 2) * sin(4 * x / 3) + 4 * x / 2;
		else if (x > 0)
			B = log10(pow(x, 2) - 4 * x / 3);
		y = A + B;
		//�������� �������� x �� y � ���������� ������
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			 << " |" << endl;
		//��������� x �� dx ��� �������� ��������
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
