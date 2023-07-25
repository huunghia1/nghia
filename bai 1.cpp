#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap mot so nguyen tu 10 den 99: ";cin >> n;
    if (n >= 10 && n < 100) {
        int hangchuc = n / 10;
        int hangdonvi = n % 10;
        int tich = hangchuc*hangdonvi;
        int tong = hangchuc+hangdonvi;
        if (tich == (tong * 2)) {
            cout << "So " << n << " thoa man dieu kien." << endl;
        } else {
            cout << "So " << n << " khong thoa man dieu kien." << endl;
        }
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap lai mot so tu 10 den 99." << endl;
    }

    return 0;
}
