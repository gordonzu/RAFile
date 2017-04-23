// Personnel.h
#ifndef Personnel_h
#define Personnel_h

#include <string.h>

class Personnel {
public:
    Personnel();
    Personnel(char*, char*, char*, int, long);
    char* name();
    char* city();
    char* ssn();
    int year();
    long salary();

private:
    const int namelen_;
    const int citylen_;
    const int ssnlen_;
    char* name_;
    char* city_;
    char* ssn_;
    long salary_;
    int year_;
};
#endif
