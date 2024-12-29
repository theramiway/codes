#include <iostream>
using namespace std;

struct Student {
    char sname[30];
    int rno;
    float cgpa;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[50]; 

    for(int i = 0; i < n; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore();
        cin.getline(students[i].sname, 30);
        cout << "Enter the roll no and CGPA of student " << i + 1 << ": ";
        cin >> students[i].rno >> students[i].cgpa;
    }

    for(int i = 0; i < n; i++) {
        cout << "Name: " << students[i].sname << "\t Roll No: " << students[i].rno << "\t CGPA: " << students[i].cgpa << endl;
    }

    return 0;
}
