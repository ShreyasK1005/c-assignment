#include <iostream>
#include <string>
using namespace std;

class Person {
	public:

		string name;
		int age;

		Person(string personName, int personAge) {
			name = personName;
			age = personAge;
		}


		void print_info() {
			cout << "Name: " << name << ", Age: " << age << endl;
		}
};

int main() {

	Person person1("Alice", 25);
	Person person2("Bob", 30);


	person1.print_info();
	person2.print_info();

	return 0;
}
