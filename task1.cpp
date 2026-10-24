#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> professions = { "Програміст", "Дизайнер", "Тестувальник", "Аналітик", "DevOps" };

    cout << "Список ІТ-професій:" << endl;

    for (auto it = professions.begin(); it != professions.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
