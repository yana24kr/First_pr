#include <cmath>
#include <iostream>
using namespace std;
int main() {
double z1,z2;
double a,b;
cout << "Enter a= ";
cin >> a;
cout << "Enter b= "
cin >> b;
z1 = (pow(sin(2 * a + 3.14 / 8), 2) + pow(cos(5 * b), 4))
	/ sqrt(pow(a, 2) + sqrt(pow(2.1 * b, 1/3)));
z2 = exp(-3 * a) + pow(4, pow(b, 2);
cout << "z1= " << z1 << endl;
cout << "z2= " << z2 << endl;
return 0;
}
