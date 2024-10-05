#include "iostream"
using namespace std;

int main(){

    using byte = unsigned char;
    pair<byte, byte> a;
    pair<byte, byte> b;
    cout << "lad'ya" << endl;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    if(a.first != b.first && a.second != b.second){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    cout << endl;

    cout << "slon" << endl;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    if((a.first - a.second == b.first - b.second) || (a.first + a.second == b.first + b.second)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    cout << endl;

    cout << "king" << endl;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    if(((a.first - 1 == b.first) || (a.first == b.first) || (a.first + 1 == b.first)) && ((a.second - 1 == b.second) || (a.second == b.second) || (a.second + 1 == b.second))){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    cout << endl;

    cout << "ferz'" << endl;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    if((!(a.first != b.first && a.second != b.second)) || ((a.second - a.first == b.second - b.first) || (a.second + a.first == b.second + b.first))){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    cout << endl;

    cout << "peshka" << endl;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    if(abs(a.first - b.first) <= 0 && (a.second + 1 == b.second)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
