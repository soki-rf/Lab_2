#include "iostream"
using namespace std;

int main(){
    long long n, k;
    int i, a, b;
    n = 1;
    for(i=8; i < 16; ++i){
        n *= i;
    }
    cout << n << endl;
    cout << endl;

    n = 1;
    cout << "Enter number a" << endl;
    cin >> a;
    for(i = a; i < 21; ++i){
        n *= i;
    }
    cout << n << endl;
    cout << endl;

    n = 1;
    cout << "Enter number b" << endl;
    cin >> b;
    for(i = 1; i < b + 1; ++i){
        n *= i;
    }
    cout << n << endl;
    cout << endl;

    n = 1;
    cout << "Enter number a & b" << endl;
    cin >> a >> b;
    for(i = 1; i < b + 1; ++i){
        n *= i;
    }
    cout << n << endl;
    cout << endl;
    return 0;
}
