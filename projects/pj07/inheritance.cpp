#include <iostream>
#include <string>

using namespace std;

/*  inheritance allows the inheritance of 
    attributes and methods from one class to another
*/

class Person{
protected:
    // members
    string name;
    int age;

public:
    // constructor
    Person(const string& new_name = "", const int new_age = 0)
        : name(new_name), age(new_age) {
        cout << "Person " << name << " was created." << endl;
    }

    // getters
    string get_name() const { return name; }
};


// inheriting from the Person class
class User : public Person {
private:
    // members
    int id;
    double balance;
    string bank_account;
    bool is_active;

public:
    // constructor
    User(const string& name, int age, int new_id, const string& new_account)
        : Person(name, age), id(new_id), balance(0.0), bank_account(new_account), is_active(true) {
        cout << "User " << id << " was created." << endl;
    }

    // getters
    double get_balance(){ return balance; }

    // method
    void deposit(const double funds){
        if(funds > 0)
            balance += funds;
    }
};


int main(int argc, char** argv){
    User user1("John", 21, 1, "1111");
    user1.deposit(400);
    cout << "Mr/Mrs "<< user1.get_name() << " your balance: " << user1.get_balance() << '$' << endl;
    return 0;
}
