// file_writer.h
#ifndef FileWriter_h
#define FileWriter_h

#include <iostream>
#include <fstream>
#include "abstract_writer.h"

using namespace::std;

class FileWriter : public AbstractWriter {
public:
  FileWriter(char* file_name);
  bool write_record();
  bool read_record();
  virtual ~FileWriter(); 
  char* file_name();

private: 
  fstream file_;
  char* file_name_;
};
#endif
