#include <iostream>


struct employee{
    int id;
    int salary;
};


int main(int argc, char** argv){
    int count = 3;
    employee employees[count];

    // typical for loop
    for(int i = 0; i < count; ++i){
        employees[i].id = i + 1;
        employees[i].salary = 1000;
    }

    // for-each loop (use the compiler option -std=c++11 or newer)
    for(const auto& emp : employees){
        std::cout << emp.id << ": " << emp.salary << '$' << std::endl;
    }
    
    return 0;
}
