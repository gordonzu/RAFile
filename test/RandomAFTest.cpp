#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "Personnel.h"
#include "MockWriter.h"
//#include "database.h"

using namespace::testing;

class RandomAFTest: public Test{
protected:
    static Personnel* pers;
    static Personnel* persname;
    static MockWriter* writer;

    static void SetUpTestCase(){
        pers = new Personnel();
        writer = new MockWriter();    
        persname = new Personnel(writer,
                                 "Gordon Zuehlke", 
                                 "Brooklyn, NY", 
                                 "562-33-2301",
                                  2017,
                                  87000);    
    }

    static void TearDownTestCase(){
        delete writer;
        writer = nullptr;
    }
};

Personnel* RandomAFTest::pers = nullptr;
Personnel* RandomAFTest::persname = nullptr;
MockWriter* RandomAFTest::writer = nullptr;

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
    EXPECT_CALL(*writer, writeRecord()).Times(AtLeast(1));
    EXPECT_FALSE(persname->writeToFile());
}







/*TEST_F(MyListTest, list_is_empty){
  ASSERT_TRUE(aList->isEmpty());
}

TEST_F(MyListTest, list_is_size_zero){
  ASSERT_EQ(aList->getSize(), 0);
}

TEST_F(MyListTest, list_is_not_empty_after_push){
  ASSERT_FALSE(bList->isEmpty());
}
*/

























