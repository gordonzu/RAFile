// Personnel.h
#ifndef Personnel_h
#define Personnel_h

#include <string.h>

class Personnel {
public:
    Personnel();
    Personnel(char*, char*);
    char* name();
    char* city();

private:
    const int namelen_;
    const int citylen_;
    char* name_;
    char* city_;


};


#endif
