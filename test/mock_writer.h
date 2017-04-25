// mock_writer.h
#ifndef MockWriter_h
#define MockWriter_h

#include <gmock/gmock.h>
#include "mock_writer.h"
#include "abstract_writer.h"

class MockWriter : public AbstractWriter {
public:
    MockWriter();     
    //bool virtual writeRecord();
    //bool virtual readRecord();

    MOCK_METHOD0(writeRecord, bool());
    MOCK_METHOD0(readRecord, bool());
};
#endif


