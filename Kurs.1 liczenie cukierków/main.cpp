#include <iostream>

using namespace std;

int uczniowie, x, y, cukierki;

int main()
{
    cout << "Ile uczniow jest w Twojej klasie:";
    cin >> uczniowie;
    cout << "Ile cukierkow kupila mama:";
    cin >> cukierki;
    x = cukierki/(uczniowie-1);
    cout << "Cukierkow dla kazdego ucznia:"<<x <<endl;
    y = cukierki-x*(uczniowie-1);
    cout << "Ilosc cukierkow dla Jasia:"<<y;
    return 0;
}
