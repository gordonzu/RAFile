#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "personnel.h"
#include "mock_writer.h"
#include "file_writer.h"
//#include "database.h"

using namespace::testing;

class RandomAFTest: public Test{
protected:
    static Personnel* pers;
    static Personnel* persname;
    static FileWriter* mock_writer;

    static void SetUpTestCase(){
        pers = new Personnel();
        mock_writer = new FileWriter("/home/gordonzu/src/cpp/RAFile/testtxt");    
        persname = new Personnel(mock_writer,
                                 "Gordon Zuehlke", 
                                 "Brooklyn, NY", 
                                 "562-33-2301",
                                  2017,
                                  87000);    
    }

    static void TearDownTestCase(){
        delete mock_writer;
        mock_writer = nullptr;
    }
};

Personnel* RandomAFTest::pers = nullptr;
Personnel* RandomAFTest::persname = nullptr;
FileWriter* RandomAFTest::mock_writer = nullptr;

TEST_F(RandomAFTest, personnelIsNotNull){
    ASSERT_NE(pers, nullptr);
}

TEST_F(RandomAFTest, personnelNameIsNotNull){
    ASSERT_NE(persname->name(), nullptr);
}

TEST_F(RandomAFTest, personnelHasCorrectName){
    ASSERT_STREQ(persname->name(), "Gordon Zuehlke");
}

TEST_F(RandomAFTest, personnelHasNameLengthTwenty){
    ASSERT_EQ(strlen(persname->name()), 14);
}

TEST_F(RandomAFTest, personnelCityIsNotNull){
    ASSERT_NE(persname->city(), nullptr);
}

TEST_F(RandomAFTest, personnelHasCorrectCity){
    ASSERT_STREQ(persname->city(), "Brooklyn, NY");
}

TEST_F(RandomAFTest, personnelHasCorrectSSN){
    ASSERT_STREQ(persname->ssn(), "562-33-2301");
}

TEST_F(RandomAFTest, personnelHasCorrectYear){
    ASSERT_EQ(persname->year(), 2017);
}

TEST_F(RandomAFTest, personnelHasCorrectSalary){
    ASSERT_EQ(persname->salary(), 87000);
}

TEST_F(RandomAFTest, personnelCallsWriteFile){
    //EXPECT_CALL(*mock_writer, write_record()).Times(AtLeast(1));
    //EXPECT_FALSE(persname->writeToFile());

    // This is a test double, not a mock object
    EXPECT_TRUE(mock_writer->write_record());

}

// STUCK -- the abstract base class/concrete class/mock object implementation
// STUCK-O

/*
TEST_F(MyListTest, list_is_empty){
  ASSERT_TRUE(aList->isEmpty());
}

TEST_F(MyListTest, list_is_size_zero){
  ASSERT_EQ(aList->getSize(), 0);
}

TEST_F(MyListTest, list_is_not_empty_after_push){
  ASSERT_FALSE(bList->isEmpty());
}
*/

























