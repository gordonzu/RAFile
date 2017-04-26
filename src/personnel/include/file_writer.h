// file_writer.h
#ifndef FileWriter_h
#define FileWriter_h

#include <iostream>
#include <fstream>
#include "abstract_writer.h"

//using namespeace::std;

class FileWriter : public AbstractWriter {
public:
  FileWriter(std::fstream& file): file_(file) {}
  bool write_record();
  bool read_record();
  virtual ~FileWriter(); 

private: 
  std::fstream& file_;
};
#endif
