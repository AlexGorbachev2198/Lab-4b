#include <iostream>
using namespace std;
struct Current_user
{
    char Name[64];
    char Surname[64];
    char phone[64];
};
struct Car
{
    Current_user a;
    char Brand[64];
    char Year[64];
    char Country_made[64];
};

int main(int argc, char* argv[]) {
    Car *pG;
    int n;
    cout << "n=";
    cin >> n;
    pG = new Car[n];
    for (int i = 0; i < n; i++) {
        cin.clear();
        cout << "Car N=" << i + 1;
        cout << "\nBrand: ";
        cin >> pG[i].Brand;
        cin.clear();
        cout << "Year: ";
        cin >> pG[i].Year;
        cin.clear();
        cout << "Country: ";
        cin >> pG[i].Country_made;
        cin.clear();
        cout << "User Name: ";
        cin >> pG[i].a.Name;
        cin.clear();
        cout << "User Surname: ";
        cin >> pG[i].a.Surname;
        cin.clear();
        cout << "Phone number: ";
        cin >> pG[i].a.phone;
    }
    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << "Car №" << i + 1 << endl;
        cout << pG[i].Brand << " " << pG[i].Year << " " << pG[i].Country_made << endl;
        cout << pG[i].a.Surname << " " << pG[i].a.Name << " " << pG[i].a.phone << endl;
    }
    free(pG);
    return 0;
}
