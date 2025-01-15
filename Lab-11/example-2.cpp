#include <iostream>

using namespace std;

struct Computer {
    string name;
    int ramGB;
    double diskTB;
    double price;
    Computer *next;

    Computer() {
        this->name = "unknown";
        this->ramGB = -1;
        this->diskTB = -1.0;
        this->price = -1.0;
        this->next = nullptr;
    }

    Computer(string name, const int ramGB, const double diskTB, const double price) {
        this->name = name;
        this->ramGB = ramGB;
        this->diskTB = diskTB;
        this->price = price;
        this->next = nullptr;
    }

    void print() const {
        cout << "Nazwa: " << this->name << endl;
        cout << "RAM (GB): " << this->ramGB << endl;
        cout << "Disk (TB): " << this->diskTB << endl;
        cout << "Cena: " << this->price << endl;
    }
};

struct ComputerStack {
    Computer* top = nullptr;
    int stackSize = 0;

    void push(Computer *newComputer) {
        if (newComputer != nullptr) {
            newComputer->next = top;
            top = newComputer;
            stackSize++;
        }
    }

    string pop() {
        string deletedName = "";
        if (top != nullptr) {
            Computer* temp = top;
            top = top->next;
            deletedName = temp->name;
            temp->next = nullptr;
            delete temp;
            stackSize--;
            return deletedName;
        }
        return deletedName;
    }

    int size() const {
        return stackSize;
    }

    void freeStack() {
        if (top != nullptr) {
            Computer* temp = top;
            while (top != nullptr) {
                top = top->next;
                if (temp != nullptr) {
                    temp->next = nullptr;
                }
                delete temp;
            }
        }
    }
};

int main() {
    ComputerStack* stack = new ComputerStack();

    Computer* comp1 = new Computer("Computer 1", 100.0, 100.0, 19999.0);
    Computer* comp2 = new Computer("Computer 2", 200.0, 200.0, 29999.0);
    Computer* comp3 = new Computer("Computer 3", 300.0, 300.0, 39999.0);

    comp1->print();

    stack->push(comp1);
    cout << endl << "Poczatek stosu:" << endl;
    stack->top->print();

    stack->push(comp2);
    cout << endl << "Poczatek stosu:" << endl;
    stack->top->print();

    stack->push(comp3);
    cout << endl <<"Poczatek stosu:" << endl;
    stack->top->print();

    cout << endl << "Wynik funkcji pop(): " << stack->pop() << endl;

    delete stack;
    return 0;
}
