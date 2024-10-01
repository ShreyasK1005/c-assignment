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

class Teacher : public Person {
	private:
		double salary;

	public:
		Teacher(string name, int age, double salary) : Person(name, age), salary(salary) {}

		void print_info() const override {
			cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
		}
};

int main() {
	Teacher teacher1("John Smith", 45, 75000.00);
	teacher1.print_info(); 

	return 0;
}
