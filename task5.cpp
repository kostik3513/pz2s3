#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> professions = { "Програміст", "Дизайнер", "Тестувальник", "Аналітик", "DevOps" };

    string searchElement = "Аналітик";
    string newElement = "Проєктувальник";

    auto it = professions.begin();
    bool found = false;

    while (it != professions.end()) {
        if (*it == searchElement) {
            professions.insert_after(it, newElement);
            found = true;
            break;
        }
        ++it;
    }

    if (!found) {
        cout << "Елемент \"" << searchElement << "\" відсутній у списку." << endl;
    }

    cout << "Оновлений список професій:" << endl;
    for (auto i = professions.begin(); i != professions.end(); ++i) {
        cout << *i << endl;
    }

    return 0;
}
