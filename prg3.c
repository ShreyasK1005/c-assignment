#include <iostream>
#include <string>
using namespace std;

class Person {
	private:

		string name;
		int age;

	public:

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


//	cout << person1.name << endl; 
//	cout << person1.age << endl;  


	person1.print_info();

	return 0;
}
