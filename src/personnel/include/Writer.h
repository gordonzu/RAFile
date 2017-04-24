// IWriter.h
#ifndef Writer_h
#define Writer_h

class Writer {
public:
    //IWriter();
    virtual ~Writer();
    virtual bool writeRecord() = 0;
    virtual bool readRecord() = 0;
};
#endif

