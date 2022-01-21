#include<iostream>
#include<conio.h>
using namespace std;

void area(int);
void area(float, float);
void area(int, int);

int main(){
	int l,h,b;
	float l2,b2;
	
	cout<<"Enter length of square: ";
	cin>>l;
	area(l);
	cout<<endl<<"Enter length and breadth of rectangle: ";
	cin>>l2>>b2;
	area(b2, l2);
	cout<<endl<<"Enter base and height of traingle: ";
	cin>>b>>h;	
	area(b,h);	
	
	getch();
	return 0;
}

void area(int x){
	cout<<"area of square: "<<x*x<<endl;
}

void area(float x, float y){
	cout<<"area of rectangle: "<<x*y<<endl;
}

void area(int x, int y){
	cout<<"area of triangle: "<<0.5*x*y<<endl;
}
