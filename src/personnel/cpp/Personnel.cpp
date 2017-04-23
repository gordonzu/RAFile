// Personnel.cpp

#include "Personnel.h"

Personnel::Personnel() : namelen_(20) {
    name_ = new char[namelen_ + 1];
}

Personnel::Personnel(char* name) : namelen_(20) {
    name_ = new char[namelen_ + 1];
    strcpy(name_, name);
}


char* Personnel::name() {
    return this->name_;
}
