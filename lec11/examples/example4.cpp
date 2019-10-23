// example3.cpp
#include <string>
#include <iostream>
using namespace std;


class Person {
  public:
    Person(const string& name) {
      name_ = name;
      cout << "Person(" << name << ") called" << endl;
    }

    ~Person() {
      cout << "~Person() called for " << name_ << endl;
     }

    string name() const { return name_; }

    void print() {
      cout << "I am a Person. My name is " << name_ << endl;
    }

  private:
    string name_;
};


class Student : public Person {
  public:
    Student(const string& name, int id) :
      Person(name) {
      id_ = id;
      cout << "Student(" << name << ", " << id << ") called" << endl;
    }

    ~Student() {
      cout << "~Student() called for name:" << name() << " and id: " << id_ << endl;
    }

    int id() const { return id_; }

    void print() {
      cout << "I am Student " << name() << " with id " << id_ << endl;
    }

  private:
    int id_;
};


int main() {

  Person john("John");
  john.print();  // Person::print()

  Student susan("Susan", 123456);
  susan.print(); // Student::print()
  susan.Person::print(); // Person::print()

  Person* p2 = &susan;
  p2->print(); // Person::print()

  Person& p3 = susan; 
  p3.print(); // Person::print()

  return 0;
}



