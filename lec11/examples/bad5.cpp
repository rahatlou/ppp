// bad5.cpp
#include <string>
#include <iostream>
using namespace std;


class Person {
  public:
    Person() { } // default constructor
    Person(const string& name) {
      name_ = name;
      age_ = 10;
      cout << "Person(" << name << ") called" << endl;
    }

    string name() const { return name_; }

    void print() {
      cout << "I am a Person. My name is " << name_ << endl;
    }

    int age_;

  private:
    string name_;
};


class Student : public Person {
  public:
    Student(const string& name, int id) : Person(name) {
     
      id_ = id;
      age_ = 20;
      cout << "Student(" << name << ", " << id << ") called" << endl;
    }

    ~Student() {
      cout << "~Student() called for name:" << name() << " and id: " << id_ << endl;
     }

     int id() const { return id_; }
    int age_;

  private:
    int id_;
};


int main() {

  Student* susan = new Student("Susan", 123456);
  susan->print();

  cout << "susan->age_ : " << susan->age_ << endl;
  cout << "susan->Person::age_ : " << susan->Person::age_ << endl;


  delete susan;

  return 0;
}



