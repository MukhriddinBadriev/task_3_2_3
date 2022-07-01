#include <iostream>
using namespace std;
struct Address
{
    string country;
    string city;
    string street;
    short number_home;
    short number_apartment;
    int index;
};
void address(Address i) {
    cout << "Страна: " << i.country << endl;
    cout << "Город: " << i.city << endl;
    cout << "Улица: " << i.street << endl;
    cout << "Номер дома: " << i.number_home << endl;
    cout << "Номер квартиры: " << i.number_apartment << endl;
    cout << "Индекс: " << i.index << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    Address my_address;
    my_address.country = "Uzbekistan";
    my_address.city = "Bukhara";
    my_address.street = "Rabotiqambar";
    my_address.number_home = 64;
    my_address.number_apartment = 1;
    my_address.index = 12345;
    address(my_address);
    return 0;
}