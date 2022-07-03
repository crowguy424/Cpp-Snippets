//factorial accuracy limit is 12
#include <iostream>
#include<conio.h>
long int factorial(int n);
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Required factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

long int factorial(int n){
    if(n<=1){
        return(1);
    } else {
        n = n*factorial(n-1);
        return(n);
    }
}
