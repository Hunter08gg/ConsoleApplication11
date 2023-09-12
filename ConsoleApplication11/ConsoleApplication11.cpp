#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    string svita;
    string DroppedItems;
    void Output();
    Person(string name, string svita, string DroppedItems);// Конструктор
private:
    string secret;
};
void Person::Output() {
    cout << this->name << " " << this->svita << " " << this->DroppedItems << "\n";
};
Person::Person(string name, string svita, string DropedItems) {
    // Конструктор
    this->name = name;
    this->svita = svita;
    this->DroppedItems = DroppedItems;
}
int main()
{
    setlocale(0, "rus");

    Person p1("1. Death Knight • ", "2. Big Pipe , Birdeye ", "3. Маска Death Knight , Разгрузочный жилет с бронепластинами Crye Precision (Goons Edition) ");
    p1.name = "1. Death Knight • ";
    p1.svita = "2. Big Pipe , Birdeye ";
    p1.DroppedItems = "3. Маска Death Knight , Разгрузочный жилет с бронепластинами Crye Precision (Goons Edition) ";
    p1.Output();
    
    cout << p1.name << " " << p1.svita << " " << p1.DroppedItems;

    Person p2("1. Зрячий • ", "2. |2| Сектанта ", "3. Балаклава Зрячего , Балаклава Зрячего(завернутая) , Разгрузочная нагрудная система Азимут СС |Хамелеон| (Олива) ");
    p2.name = "1.Зрячий • ";
    p2.svita = "2. |2| Сектанта ";
    p2.DroppedItems = "3. Балаклава Зрячего , Балаклава Зрячего(завернутая) , Разгрузочная нагрудная система Азимут СС |Хамелеон| (Олива) ";
    p2.Output();

    cout << p2.name << " " << p2.svita << " " << p2.DroppedItems;

    Person p3("1. Кабан • ", "2. |6| охранников + 2-3 снайпера на крыше ", "3. Пулемет ПКМ или Пулемет ПКП ");
    p3.name = "1. Кабан • ";
    p3.svita = "2. |6| охранников + 2-3 снайпера на крыше ";
    p3.DroppedItems = "3. Пулемет ПКМ или Пулемет ПКП ";
    p3.Output();

    cout << p3.name << " " << p3.svita << " " << p3.DroppedItems;

    return 0;

}

