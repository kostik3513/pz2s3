#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    
    forward_list<string> professions = { "Програміст", "Дизайнер", "Тестувальник", "Аналітик", "DevOps" };

    int totalChars = 0;

    for (auto it = professions.begin(); it != professions.end(); ++it) {
        totalChars += it->length();
    }

    cout << "Загальна кількість символів у назвах елементів: " << totalChars << endl;

    return 0;
}
