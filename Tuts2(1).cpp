#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x;
	cout << "Insert number: ";
	cin >> x;
	if((x&1)==0){
		cout << x << " is even";
	} else {
		cout << x << " is odd";
	}
	system("pause>0");
	return 0;
}
