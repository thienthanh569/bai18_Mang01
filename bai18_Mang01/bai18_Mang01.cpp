// bai18_Mang01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n, a[100];
void nhap()
{
	int i = 1;
	cout << "so phan tu cua mang = "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void tbc()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	s = s + a[i];
	cout << "Trung binh cong la?: " << s / n<<endl;
}
void max_min()
{
	int max, min;
	max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	cout << "Gia tri lon nhat cua mang la; " << max << endl;
	min = a[0];
	for (int i = 1; i < n; i++)
		if (min > a[i])
			min = a[i];
	cout << "Gia tri nho nhat cua mang la; " << min << endl;
}
int main()
{
	nhap();
	tbc();
	max_min();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
