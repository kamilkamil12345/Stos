#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

class Stack {
private:
    int elements[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            elements[++top] = value;
            cout << "Dodano " << value << " na stos." << endl;
        } else {
            cout << "Stos jest pelny. Nie mozna dodac elementu." << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            cout << "Usunieto " << elements[top--] << " ze stosu." << endl;
        } else {
            cout << "Stos jest pusty. Nie mozna usunac elementu." << endl;
        }
    }

    void display() {
        if (top >= 0) {
            cout << "Zawartosc stosu: ";
            for (int i = 0; i <= top; ++i) {
                cout << elements[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stos jest pusty." << endl;
        }
    }
};

int main() {
    Stack stack;
    char choice;

    do {
        cout << "Menu:\n"
                  << "1. Dodaj element na stos\n"
                  << "2. Usun element ze stosu\n"
                  << "3. Wyswietl stos\n"
                  << "0. Zakoncz program\n"
                  << "Wybierz opcje: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                int value;
                cout << "Podaj wartosc do dodania na stos: ";
                cin >> value;
                stack.push(value);
                break;
            }
            case '2':
                stack.pop();
                break;
            case '3':
                stack.display();
                break;
            case '0':
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawna opcja. Sprobuj jeszcze raz." << endl;
        }
    } while (choice != '0');

    return 0;
}
