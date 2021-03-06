#include <string>
#include <ostream>
using namespace std;

#pragma once

// Class forward
class PersonBuilder;

class Person {
    string name;

    // Address information
    string street_address;
    string post_code;
    string city;

    // Employment information
    string company_name;
    string position;
    int annual_income{0};

public:
    static PersonBuilder create();

    friend class PersonBuilder;
    friend class PersonAddressBuilder;
    friend class PersonJobBuilder;

    friend ostream &operator<<(ostream &out, const Person &p);
    };

ostream &operator<<(ostream &out, const Person &p);