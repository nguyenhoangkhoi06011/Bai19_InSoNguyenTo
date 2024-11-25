
#include<iostream>
#include<cmath>    
using namespace std;
int main()
{
    int so;
    cout << "nhap so:"; cin >> so;
    int dem = 0;
    for (int i = 1; i <= so; i++)
    {
        //neu chia het thi tong dem len1:so %==0
        if (so % i == 0)
        {
            dem++;
        }
    }
    cout << "so dem=" << dem << endl;
    if (dem == 2)
    {
        cout << "so" << so << "la so nguyen to\n";
    }
    else
    {
        cout << "so" << so << "khong phai so nguyen to\n";
    }
    return 0;
}