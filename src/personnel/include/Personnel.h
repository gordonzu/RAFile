// Personnel.h
#ifndef Personnel_h
#define Personnel_h

#include <string.h>

class Personnel {
public:
    Personnel();
    Personnel(char*);
    char* name();

private:
    const int namelen_;
    char* name_;


};


#endif
