#include <iostream>	
using namespace std;

int main() {
    int x,dn;
    cout << "Nhap =  ";cin >> x;
    dn = (x % 10) * 100 + ((x / 10) % 10) * 10 + x / 100;
    cout << "dao nguoc  so la: " << dn;
    return 0;
}
