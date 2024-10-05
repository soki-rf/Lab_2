#include "iostream"
using namespace std;

int main(){

    int n, i;
    n = 7;
    for(i=1; i < 10; ++i){
        cout << i << " * " << n << " = " << i*n << endl;
    }
    cout << endl;
  
    cout << "Enter number: ";
    cin >> n;

    for(i=1; i < 10; ++i){
        cout << i << " * " << n << " = " << i*n << endl;
    }

    return 0;
}
