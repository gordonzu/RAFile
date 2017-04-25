// Personnel.h
#ifndef personnel_h
#define personnel_h

#include <string.h>
#include "abstract_writer.h"

class Personnel {
public:
    Personnel();
    Personnel(AbstractWriter*, char*, char*, char*, int, long);
    char* name();
    char* city();
    char* ssn();
    int year();
    long salary();

    bool writeToFile();
    bool readFromFile();

private:
    const int namelen_;
    const int citylen_;
    const int ssnlen_;
    char* name_;
    char* city_;
    char* ssn_;
    long salary_;
    int year_;
    AbstractWriter* writer_;
};
#endif
