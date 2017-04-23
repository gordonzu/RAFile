// Personnel.cpp

#include "Personnel.h"

Personnel::Personnel() : namelen_(20), citylen_(20), ssnlen_(20) {
    name_ = new char[namelen_ + 1];
    city_ = new char[citylen_ + 1];
    ssn_  = new char[ssnlen_ + 1];
}

Personnel::Personnel(char* name, char* city, char* SSN) 
                    : namelen_(20), citylen_(20), ssnlen_(20) {
    name_ = new char[namelen_ + 1];
    strcpy(name_, name);
    city_ = new char[citylen_ + 1];
    strcpy(city_, city);
    ssn_ = new char[ssnlen_ + 1];
    strcpy(ssn_, SSN);

}

char* Personnel::name() {
    return this->name_;
}

char* Personnel::city() {
    return this->city_;
}

char* Personnel::ssn() {
    return this->ssn_;
}



