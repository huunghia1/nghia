#include <iostream>
using namespace std;
int main() 
{
	int a,b,min,max;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap b = ";cin>>b;
	if(a>b) max = a;
	if(b>a) max = b;
	if(a<b) min = a;
	if(b<a) min = b;
cout<<"min = "<<min<<endl;
cout<<"max = "<<max<<endl;
return 0;
}
