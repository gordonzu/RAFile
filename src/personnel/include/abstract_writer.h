// abstract_writer.h
#ifndef AbstractWriter_h
#define AbstractWriter_h

class AbstractWriter {
public:
    //AbstractWriter();
    virtual ~AbstractWriter();
    virtual bool write_record() = 0;
    virtual bool read_record() = 0;
};
#endif

