#include<iostream>
using namespace std;

struct data {
    string name;
    int rno;
    char div;
};

class lookuptable {
public:
    data bhoomika;
    data amogh;
    data saanvi;
    data ramya;
    data match(string input);
    void display(data d);
    lookuptable();
};

lookuptable::lookuptable() {
    bhoomika = {"Bhoomika Malagar", 528, 'E'};
    amogh = {"Amogh Pai", 529, 'E'};
    saanvi = {"Saanvi Shetty", 509, 'E'};
    ramya = {"Ramya Rao", 538, 'E'};
}

data lookuptable::match(string input) {
    if (input == "Bhoomika Malagar")
        return bhoomika;
    if (input == "Amogh Pai")
        return amogh;
    if (input == "Saanvi Shetty")
        return saanvi;
    if (input == "Ramya Rao")
        return ramya;

    return {"", 0, ' '};
}

void lookuptable::display(data d) {
    if (d.name != "") {
        cout << "Name: " << d.name << endl;
        cout << "Roll Number: " << d.rno << endl;
        cout << "Division: " << d.div << endl;
    } else {
        cout << "Data not found." << endl;
    }
}

int main() {
    lookuptable database;
    data bhoomika = database.match("Bhoomika Malagar");
    data amogh = database.match("Amogh Pai");
    data saanvi = database.match("Saanvi Shetty");
    data ramya = database.match("Ramya Rao");

    cout << "Bhoomika's Details:" << endl;
    database.display(bhoomika);
    cout << endl;

    cout << "Amogh's Details:" << endl;
    database.display(amogh);
    cout << endl;

    cout << "Saanvi's Details:" << endl;
    database.display(saanvi);
    cout << endl;

    cout << "Ramya's Details:" << endl;
    database.display(ramya);
    cout << endl;

    return 0;
}
