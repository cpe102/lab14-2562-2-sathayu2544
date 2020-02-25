#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b,*y = &b;
	int *x = &a,**z = &x;
	
	cout << " a = "<< a << "\n ";
	cout << "b = "<< b << "\n ";
	cout << "c = "<< c << "\n ";
	cout << "x = "<< x << "\n ";
	cout << "y = "<< (int *)y << "\n ";
	cout << "z = "<< z << "\n ";
	cout << "\n"<<" &a = "<< &a << "\n ";
	cout << "&b = "<< (int *)&b << "\n ";
	cout << "&c = "<< (int *)&c << "\n ";
	cout << "&x = "<< &x << "\n ";
	cout << "&y = "<< &y << "\n ";
	cout << "&z = "<< &z << "\n ";
	c ='F';
	b = c;
	cout << "\n"<<" a = "<< a << "\n ";
	cout << "b = "<< b << "\n ";
	cout << "c = "<< c << "\n ";
	cout << "x = "<< x << "\n ";
	cout << "y = "<< (int *)y << "\n ";
	cout << "z = "<< z << "\n ";
	*y = 'W';
	b = *y;
	cout << "\n"<<" a = "<< a << "\n ";
	cout << "b = "<< b << "\n ";
	cout << "c = "<< c << "\n ";
	cout << "x = "<< x << "\n ";
	cout << "y = "<< (int *)y << "\n ";
	cout << "z = "<< z << "\n ";
	*x = 6;
	a = *x;
	cout << "\n"<<" a = "<< a << "\n ";
	cout << "b = "<< b << "\n ";
	cout << "c = "<< c << "\n ";
	cout << "x = "<< x << "\n ";
	cout << "y = "<< (int *)y << "\n ";
	cout << "z = "<< z << "\n ";
	**z = 7;
	a = **z;
	cout << "\n"<<" a = "<< a << "\n ";
	cout << "b = "<< b << "\n ";
	cout << "c = "<< c << "\n ";
	cout << "x = "<< x << "\n ";
	cout << "y = "<< (int *)y << "\n ";
	cout << "z = "<< z << "\n "; 
	return 0;
}
