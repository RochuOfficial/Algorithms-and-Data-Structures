// Mateusz Rochowski, 258669
// ---------- IMPORT LIBRARIES ----------
#include <cstdlib>
#include <iostream>

using namespace std;

struct Student{
    string name;
    string email;
    int id;
    double gpa;
    Student* next;
    Student* prev;

    Student(){
        name = "unknown";
        email = "unknwon@example.com";
        id = -1;
        gpa = 0.0;
    }

    Student(string name, string email, int id, double gpa){
        this->name = name;
        this->email = email;
        this->id = id;
        this->gpa = gpa;
    }

    void print(){
        cout << "Student ID: " << id << endl;
        cout << "Student name: " << name << endl;
        cout << "Student email: " << email << endl;
        cout << "Student GPA: " << gpa << endl;
        cout << endl << endl;
    }
};

struct DoubleLinkedList{
    Student* head;
    Student* last;
    Student* current;

    DoubleLinkedList(){
        head = NULL;
        last = NULL;
        current = NULL;
    }

    void addHead(Student* newStudent){
        if (head != NULL){
            newStudent->prev = NULL;
            newStudent->next = head;
            head->prev = newStudent;
            head = newStudent;
            setCurrent(head);
        }
        else {
            head = last = newStudent;
            newStudent->next = NULL;
            newStudent->prev = NULL;
            setCurrent(head);
        }
    }

    void addLast(Student* newStudent){
        newStudent->next = NULL;
        if (last != NULL){
            last->next = newStudent;
            newStudent->prev = last;
            last = newStudent;
            setCurrent(last);
        }
        else {
            addHead(newStudent);
            setCurrent(last);
        }
    }

    void deleteHead(){
        head = head->next;
        head->prev = NULL;
        setCurrent(head);
    }

    void deleteLast(){
        last = last->prev;
        last->next = NULL;
        setCurrent(last);
    }

    void setCurrent(Student* student){
        current = student;
    }

    Student* findStudent(string email){
        Student* temp = head;

        while (temp != NULL){
            if (temp->email == email){
                setCurrent(temp);
                return current;
            }
            temp = temp->next;
        }

        setCurrent(last);
    }

    void printAll(){
        Student* temp = head;

        while(temp != NULL){
            temp->print();
            temp = temp->next;
        }
    }
};

// ---------- MAIN ----------
int main(int argc, char *argv[]){

    Student *student1 = new Student();
    student1->print();
    Student *student2 = new Student("Peter", "peter@p.lodz.pl", 124, 4.0);
    student2->print();

    //Student *student3 = student2; // pointer copy
    Student* student3 = new Student("M.R", "m.r@p.lodz.pl", 125, 5.0);
    student3->print();
    student3->id = -1;
    student3->print();
    student2->print();

    student1->name = "Matty";
    student1->email = "matty@p.lodz.pl";
    student1->id = 123;
    student1->gpa = 4.75;

    student1->print();

    cout << "----- LISTA -----" << endl;

    DoubleLinkedList* myList = new DoubleLinkedList();
    //myList->head = student2;
    //myList->head->print();

    myList->addHead(student1);
    myList->addHead(student3);
    myList->addHead(student2);

    myList->printAll();

    cout << "----- OSTATNI ELEMENT LISTY -----" << endl;
    myList->last->print();

    Student* student4 = new Student("J.B", "j.b@p.lodz.pl", 126, 2.0);
    Student* student5 = new Student("E.M", "e.m@p.lodz.pl", 127, 3.0);
    myList->addLast(student5);
    myList->addLast(student4);

    cout << "----- LISTA -----" << endl;
    myList->printAll();

    cout << "---------------------------" << endl;

    myList->deleteHead();
    cout << "----- LISTA -----" << endl;
    myList->printAll();

    myList->deleteLast();
    cout << "----- LISTA -----" << endl;
    myList->printAll();

    cout << "---------------------------" << endl;

    myList->findStudent("matty@p.lodz.pl");
    myList->current->print();
    myList->last->print();

    cout << "---------------------------" << endl;

    // myList->findStudent("fake@p.lodz.pl");
    // myList->current->print();
    // myList->last->print();

    return 0;
}
