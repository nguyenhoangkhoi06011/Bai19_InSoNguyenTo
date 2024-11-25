#include <iostream>
using namespace std;


bool(kiemtraSNT(int s)) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	else {
		return false;
	}
}


bool kiemtraSCP(int x) {
	if (sqrt(x) == (int)sqrt(x)) return true;
	return false;
}


int main()
{
	cout << "Kiem tra so co phai la so nguyen to hay khong\n";
	int so;
	cout << "Nhap so: "; cin >> so;

	for (int m = 1; m <= so; m++)
	{
		if (kiemtraSNT(m) == true) cout << m << " ";
	}

	cout << endl;


	for (int i = 1; i < 100; i++)
	{
		if (kiemtraSCP(i) == true) cout << i << " ";
	}


	/*
	for (int i = 1; i <= so; i++)
	{
		if (so %i == 0)
		{
			dem++;
		}
	}
	cout << "So dem = " << dem << endl;
	if (dem == 2)
	{
		cout << "So " << so << " La so nguyen to\n";
	}
	else
	{
		cout << "So " << so << " Khong phai la so nguyen to\n";
	}
	*/

	return 0;
}