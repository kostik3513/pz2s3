#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    
    forward_list<string> professions = { "Програміст", "Дизайнер", "Тестувальник", "Аналітик", "DevOps" };
    
    string searchElement = "Аналітик";

    auto it = professions.begin();
    while (it != professions.end()) {
        if (*it == searchElement) {
            break;
        }
        ++it;
    }

    if (it != professions.end()) {
        cout << "Елемент знайдено" << endl;
    } else {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;
}
