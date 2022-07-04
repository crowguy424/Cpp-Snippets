
//Determine the prime number
#include <iostream>
using namespace std;
int main(){

int i, n;
int count = 0;
cout << "Insert yer number: ";
cin >> n;
for(i = 1; i<=n; i++){
  if(n%i == 0){
      count++;
  }
}

if(count == 2){
  cout << n << " is prime";
} else {
  cout << "Nooooooo!" << endl;
}

return 0;


}
