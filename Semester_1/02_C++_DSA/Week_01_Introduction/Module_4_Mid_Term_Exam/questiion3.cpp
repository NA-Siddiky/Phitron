#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    // Constructor declaration
    Person(const string &n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    // Creating two objects of the Person class
    Person *person1 = new Person("John Doe", 5.8f, 40);
    Person *person2 = new Person("Jane Smith", 5.6f, 35);

    // Comparing ages and printing the name of the person with the greater age
    if (person1->age > person2->age)
    {
        cout << "1st Person with the greater age is: " << person1->name << endl;
    }
    else if (person2->age > person1->age)
    {
        cout << "2nd person with the greater age is: " << person2->name << endl;
    }
    else
    {
        cout << "Both persons have the same age." << endl;
    }

    // Freeing the memory allocated for the objects
    delete person1;
    delete person2;

    return 0;
}
