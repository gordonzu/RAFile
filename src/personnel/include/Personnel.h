// Personnel.h
#ifndef Personnel_h
#define Personnel_h

#include <string.h>

class Personnel {
public:
    Personnel();
    Personnel(char*, char*, char*);
    char* name();
    char* city();
    char* ssn();

private:
    const int namelen_;
    const int citylen_;
    const int ssnlen_;
    char* name_;
    char* city_;
    char* ssn_;


};


#endif
