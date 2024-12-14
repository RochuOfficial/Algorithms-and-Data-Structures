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

class LinkedList{
    public:
        Student* head;
        Student* last;

    public:
        LinkedList(){
            head = NULL;
            last = NULL;
        }

        void addHead(Student* newStudent){
            if (head != NULL){
                newStudent->next = head;
                head = newStudent;
            }
            else {
                head = last = newStudent;
                newStudent->next = NULL;
            }
        }

        void addLast(Student* newStudent){
            newStudent->next = NULL;
            if (last != NULL){
                last->next = newStudent;
                last = newStudent;
            }
            else {
                addHead(newStudent);
            }
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

    LinkedList* myList = new LinkedList();
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

    return 0;
}
