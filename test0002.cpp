#include <iostream>
#include <string>
#include <vector>

int main(){

    // char *p;

    // std::cout << "Value of pointer: " << p <<"\n";
    // std::cout << "Adress of pointer: " << &p <<"\n";
    // std::cout << "Size of pointer: " << sizeof(p) <<"\n";

    // int *pointer;

    // int value {100};

    // pointer = &value;
    // std::cout<<"value of pointer: "<< *pointer<<"\n";
    // std::cout<<"address of pointer: "<< pointer<<"\n";
    // std::cout<<"address of value: "<< &value<<"\n";

    std::string emri = "name";
    std::string *pointer {&emri};

    std::cout << "value: "<< *pointer << "\n";
    std::cout << "address: "<< pointer << "\n";
    std::cout << "address of string: "<< &emri << "\n";
    std::cout << "value of string: "<< emri << "\n";

    *pointer = "GentritFejza";
    std::cout << "value: "<< *pointer <<"\n";
    std::cout << "address: "<< pointer <<"\n";
    std::cout << "address of string: "<< &emri <<"\n";
    std::cout << "value of string: "<< emri << "\n";

    std::vector <std::string> emrat {"name1", "name2", "name3"};
    std::vector <std::string> *stringptr = &emrat;

    // std::cout << "value: "<< *stringptr << "\n";
    std::cout << "address: "<< stringptr << "\n";
    std::cout << "address of string: "<< &emrat << "\n";
    // std::cout << "value of string: "<< emrat << "\n";

    for (auto emrat: *stringptr)
        std::cout<< emrat <<" ";
    // std::cout << "value: "<< *stringptr <<"\n";
    std::cout << "address: "<< stringptr <<"\n";
    std::cout << "address of string: "<< &emrat <<"\n";
    // std::cout << "value of string: "<< emrat << "\n";
    for (auto emrat: *stringptr)
        std::cout<< (*stringptr).at(0) <<" ";


    return 0;


}