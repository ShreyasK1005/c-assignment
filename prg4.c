#include <iostream>
#include <string>

using namespace std;

class Person {
	protected:
		string name;
		int age;

	public:
		Person(string name, int age) : name(name), age(age) {}

		virtual void print_info() const {
			cout << "Name: " << name << ", Age: " << age << endl;
		}
};

class Student : public Person {
	private:
		string department;

	public:
		Student(string name, int age, string department) : Person(name, age), department(department) {}

		void print_info() const override {
			cout << "Name: " << name << ", Age: " << age << ", Department: " << department << endl;
		}
};

int main() {
	Person person1("Alice", 30);
	person1.print_info();

	Student student1("Bob", 20, "Computer Science");
	student1.print_info();

	return 0;
}

