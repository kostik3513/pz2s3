#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    
    forward_list<string> professions = { "Програміст" };

    professions.push_front("Data Scientist");
    professions.push_front("Архитектор");

    cout << "Список після додавання елементів:" << endl;
    for (auto it = professions.begin(); it != professions.end(); ++it) {
        cout << *it << endl;
    }

    professions.pop_front();

    cout << "\nПісля видалення першого елемента:" << endl;
    for (auto it = professions.begin(); it != professions.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
