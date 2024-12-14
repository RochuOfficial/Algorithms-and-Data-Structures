#include <iostream>

using namespace std;

struct Laptop {
    string name;
    int ramGB;
    double disk;
    double display;
    double price;
    Laptop* next;

    Laptop() {
        this->name = "unknown";
        this->ramGB = 0;
        this->disk = -1.0;
        this->display = -1.0;
        this->price = -1.0;
        this->next = nullptr;
    }

    Laptop(string name, const int ramGB, const double disk, const double display, const double price) {
        this->name = name;
        this->ramGB = ramGB;
        this->disk = disk;
        this->display = display;
        this->price = price;
        this->next = nullptr;
    }

    void print() const {
        cout << "Nazwa: " << this->name << endl;
        cout << "RAM: " << this->ramGB << endl;
        cout << "Dysk: " << this->disk << endl;
        cout << "Wyswietlacz: " << this->display << endl;
        cout << "Cena: " << this->price << endl;
    }
};

struct LaptopQueue {
    Laptop* first;
    Laptop* last;

    LaptopQueue() {
        first = nullptr;
        last = nullptr;
    }

    void push(Laptop* newLaptop) {
        if (newLaptop != nullptr) {
            newLaptop->next = nullptr;
            if (last != nullptr) {
                last->next = newLaptop;
                last = newLaptop;
            } else {
                first = last = newLaptop;
            }
        }
    }

    string pop() {
        if (first != nullptr) {
            Laptop* temp = first;
            string deletedName = temp->name;
            first = first->next;
            temp->next = nullptr;
            delete temp;
            return deletedName;
        }
        return "";
    }

    // TODO: Add the rest functions:
    // empty()
    // size()
    // front()
    // back()
};

int main() {
    LaptopQueue* queue = new LaptopQueue();

    Laptop* laptop1 = new Laptop("Lenovo", 8, 1024.0, 11.5, 3499.99);
    Laptop* laptop2 = new Laptop("MacBook Air", 16, 256.0, 13.0, 4999.0);
    Laptop* laptop3 = new Laptop("Macbook Pro", 96, 8380.0, 16.0, 40000.0);
    Laptop* laptop4 = new Laptop("Think Pad", 32, 2048.0, 15.0, 5999.99);
    Laptop* laptop5 = new Laptop("Alien", 64, 1024.0, 10.0, 2499.99);

    queue->push(laptop1);
    queue->push(laptop2);
    queue->push(laptop3);
    queue->push(laptop4);
    queue->push(laptop5);

    cout << queue->pop() << endl;

    return 0;
}
