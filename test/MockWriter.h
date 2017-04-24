// MockWriter.h
#ifndef MockFileWriter_h
#define MockFileWriter_h

#include "Writer.h"
#include <gmock/gmock.h>

class MockWriter : public Writer {
public:
    MockWriter();     
    //bool virtual writeRecord();
    //bool virtual readRecord();

    MOCK_METHOD0(writeRecord, bool());
    MOCK_METHOD0(readRecord, bool());
};
#endif

