#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) { 
        name = n;
        age = a;
    }
    virtual void display() {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

// Forward declaration of Administration
class Administration;

class Student : virtual public Person { 
protected:
    int rollNumber;
    string branch;
    int marks;
public:
    Student(string n, int a, int r, string b, int m) : Person(n, a) {
        rollNumber = r;
        branch = b;
        marks = m;
    }
    float calculate_cgpa() {
        return float(marks) / 10;
    }
    void display() override {
        cout << "Student Details:\n";
        Person::display();
        cout << "Roll Number: " << rollNumber
             << "\nBranch: " << branch
             << "\nMarks: " << marks
             << "\nCGPA: " << calculate_cgpa() << endl; 
    }
    friend class Administration;
};

class Faculty : virtual public Person { 
protected:
    string department;
    int facultyID;
    int salary;
public:
    Faculty(string n, int a, string d, int f, int s) : Person(n, a) { 
        department = d;
        facultyID = f;
        salary = s;
    }
    void display() override {
        cout << "\nFaculty Details:\n";
        Person::display();
        cout << "Faculty ID: " << facultyID
             << "\nDepartment: " << department
             << "\nSalary: " << salary << " Rupees" << endl;
    }
    friend class Administration;
};

// Teaching Assistant with Multiple Inheritance
class TeachingAssistant : public Student, public Faculty {
public:
    TeachingAssistant(string n, int a, int r, string b, int m, string d, int f, int s) 
        : Person(n, a), Student(n, a, r, b, m), Faculty(n, a, d, f, s) {}
    void display() override {
        cout << "\nTeaching Assistant Details:\n";
        Person::display();
        Student::display();
        Faculty::display();
    }
};

// Administration class with Friend Function
class Administration {
public:
    static void showDetails(const Student &s, const Faculty &f) {
        cout << "\nAdministration Friend Function:\n";
        cout << "Student " << s.name << " from " << s.branch << " scored " << s.marks << " marks.\n";
        cout << "Faculty " << f.name << " teaches " << f.department << ".\n";
    }
};

int main() {
    Student s("Raj Malhotra", 20, 2023101, "CSE (AI-ML)", 89);
    Faculty f("Dr. A. Sharma", 45, "Computer Science", 1001, 120000);
    TeachingAssistant t("Priya Desai", 25, 1923105, "CSE (AI-ML)", 85, "Artificial Intelligence", 2005, 35000);

    s.display();
    f.display();
    t.display();

    Administration::showDetails(s, f);
    
    return 0;
}

