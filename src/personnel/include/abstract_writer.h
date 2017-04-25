// abstract_writer.h
#ifndef AbstractWriter_h
#define AbstractWriter_h

class AbstractWriter {
public:
    //AbstractWriter();
    virtual ~AbstractWriter();
    virtual bool writeRecord() = 0;
    virtual bool readRecord() = 0;
};
#endif

