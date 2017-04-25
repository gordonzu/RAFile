// Personnel.cpp

#include "personnel.h"

Personnel::Personnel() : namelen_(20), citylen_(20), ssnlen_(20) {
    name_ = new char[namelen_ + 1];
    city_ = new char[citylen_ + 1];
    ssn_  = new char[ssnlen_ + 1];
}

Personnel::Personnel(AbstractWriter* writer, char* name, char* city, char* SSN, int year, long salary) 
                    : namelen_(20), citylen_(20), ssnlen_(20) {
    writer_ = writer;
    name_ = new char[namelen_ + 1];
    strcpy(name_, name);
    city_ = new char[citylen_ + 1];
    strcpy(city_, city);
    ssn_ = new char[ssnlen_ + 1];
    strcpy(ssn_, SSN);
    salary_ = salary;  
    year_ = year;
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
int Personnel::year() {
    return this->year_;
}

long Personnel::salary() {
    return this->salary_;
}

bool Personnel::writeToFile() {
    return writer_->writeRecord();
}

bool Personnel::readFromFile() {
    return writer_->readRecord();
}





