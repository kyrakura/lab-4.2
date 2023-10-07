#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y{};
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
		if (x < -5)
			y = 1 / tan(x);
		else if (x >= -5 && x < 0)
			y = pow(x, 2) * sin(4 * x / 3) + 4 * x / 2;
		else if (x > 0)
			y = log10(pow(x, 2) - 4 * x / 3);
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
