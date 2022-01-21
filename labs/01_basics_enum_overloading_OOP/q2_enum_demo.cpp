
#include<iostream>
#include<conio.h>
using namespace std;

enum fruit{
  apple, mango, pineapple = 10, watermelon
};
  
  
int main(){
	cout<<"number of apple: "<<apple<<endl;
	cout<<"number of mango: "<<mango<<endl;
	cout<<"number of pineapple: "<<pineapple<<endl;
	cout<<"number of watermelon: "<<watermelon<<endl;
	getch();
	return 0;
}
