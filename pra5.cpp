#include <iostream>
using namespace std;
int main(){
	int i, j;
	double x,y;
	cout<<"introduce el primer numero: ";cin>>i; 
	cout<<"introduce el segundo numero: "; cin>>j;
	i+=j; i-=6;
	i*=4; i/=3;
	i++; j--;
	cout<<"i="<<i<<endl<<"j="<<j<<endl;
	cout<<"introduce el primer numero real: "; cin>>x;
	cout<<"introduce el segundo numero real: "; cin>>y;
	x+=y; y-=4.0;
	x*=4.0; y/=3.0;
	x++; y--;
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
	system("pause");
	return 0;
}
