#include <bits/stdc++.h>
using namespace std;

int a[10000005];

int main()
{
    int n;
    cout << "Nhap so N: ";
    cin >> n;
    cout << "Nhap phan tu mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Sau khi dung InsertionSort: ";

    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}