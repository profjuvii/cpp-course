#include <iostream>

/*  allows you to use all identifiers from 
    a given namespace without having to specify 
    the namespace again before each identifier
*/
using namespace std;

struct employee{
    int id;
    int salary;
};


int main(int argc, char** argv){
    int count = 3;
    struct employee employees[count];

    // typical for loop
    for(int i = 0; i < count; ++i){
        employees[i].id = i + 1;
        employees[i].salary = 1000;
    }

    // for-each loop (use the compiler option -std=c++11 or newer)
    for(struct employee emp : employees){
        cout << emp.id << ": " << emp.salary << '$' << endl;
    }
    
    return 0;
}
