#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;
    string group = "2025 group";

public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setGrade(char g) {
        grade = g;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    char getGrade() {
        return grade;
    }
    void displayInfo() {
        cout << getName() << endl;
        cout << getAge() << endl;
        cout << getGrade() << endl;
        cout << group << endl;
    }
};

int main() {
    Student s;
    s.setName("Yub Raj Kaucha");
    s.setAge(25);
    s.setGrade('A');
    cout << s.getName() << endl;
    cout << s.getAge() << endl;
    cout << s.getGrade() << endl;
    s.displayInfo();
    return 0;
}
