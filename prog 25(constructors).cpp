#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string grade;
public:
    Student(std::string studentName, int studentAge, std::string studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    Student student1("John Doe", 18, "A");
    student1.displayDetails();

    return 0;
}

