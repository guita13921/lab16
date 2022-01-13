#include<iostream>
using namespace std;

int a = 5;
string b = "A";
string &c = b;
int *x = &a;
string *y = &b;
int **z =  &x;


int main(){

cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;
cout << endl;
cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z;
cout << endl;
c = "F";
cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;
cout << endl;
*y = "W";
cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;
cout << endl;
*x = 6;
cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;
cout << endl;
**z = 7;
cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;
cout << endl;
	return 0;
}
