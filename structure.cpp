#include <iostream>
using namespace std;

struct Student {
    char sname[30];
    int rno;
    float cgpa;
};

int main() {
    Student s;
    cout << "Enter the name: ";
    cin.ignore();
    cin.getline(s.sname, 30);
    cout << "Enter the roll no and CGPA: ";
    cin >> s.rno >> s.cgpa;
    cout << "Name: " << s.sname << "\t Roll No: " << s.rno << "\t CGPA: " << s.cgpa << endl;
    return 0;
}
