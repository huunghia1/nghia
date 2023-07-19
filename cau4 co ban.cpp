#include <iostream> 
#define Pi 3.14
using namespace std;
int main()
{
    float bk, dt, cv;
    cout << "Nhap vao ban kinh cua hinh tron: ";cin >> bk;
    dt = bk*bk*Pi;
    cout << "Dien tich cua hinh tron la: " << dt << endl;
    cv = (bk*2)*Pi ;
    cout << "Chu vi hinh tron la: "<<cv <<endl;

    return 0;
}
