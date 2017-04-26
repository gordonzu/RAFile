// file_writer.cpp

#include "file_writer.h"

FileWriter::FileWriter(char* file_name): file_name_(file_name)
{
    file_.open(file_name_);

    if (!file_.is_open()) {
        std::cout << "File " << file_name_ << " did not open." << endl;
    } 
}

char* FileWriter::file_name()
{
    return file_name_;
}

bool FileWriter::write_record()
{
    return true;
}

bool FileWriter::read_record()
{
    return true;
}

FileWriter::~FileWriter()
{
    //delete file_;
    //file_ = nullptr;  

}
