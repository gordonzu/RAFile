// Personnel.h
#ifndef Personnel_h
#define Personnel_h

#include <string.h>
#include "Writer.h"

class Personnel {
public:
    Personnel();
    Personnel(Writer*, char*, char*, char*, int, long);
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
    Writer* writer_;
};
#endif
