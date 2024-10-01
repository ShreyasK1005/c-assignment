#include <iostream>
#include <string>

using namespace std;

class Person {
	public:
		Person(string name, int age) {
			this->name = name;
			this->age = age;
		}

		string getName() {
			return name;
		}

		int getAge() {
			return age;
		}

		void print_info() {
			cout << "Name: " << name << ", Age: " << age << endl;
		}

	private:
		string name;
		int age;
};

int main() {
	Person person("John Doe", 30);
	person.print_info();

	return 0;
}

