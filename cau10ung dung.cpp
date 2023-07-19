#include <iostream>	
using namespace std;

int main() {
    int x,dn;
    cout << "Nhap vao 3 chu so: ";cin >> x;
    dn = (x % 10) * 100 + ((x / 10) % 10) * 10 + x / 100;
    cout << "dao nguoc cua 3 so la: " << dn;
    return 0;
}
