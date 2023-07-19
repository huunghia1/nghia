#include <iostream>
using namespace std;

int main() {
    char chu;
    int so;
    cout << "Nhap  mot ky tu: ";cin >> chu;
    cout << "Ma ASCII cua ky tu '" << chu << "' la: " << int(chu) << endl;
    cout << "Nhap mot so nguyen trong khoang tu 1 den 255: ";cin >> so;
    cout << "Ky tu co ma ASCII " << so << " la: " << char(so) << endl;

    return 0;
}
