#include <gmock/gmock.h>
#include "Personnel.h"
//#include "database.h"

using namespace::testing;

class RandomAFTest: public Test{
protected:
    static Personnel* pers;
    static Personnel* persname;

    static void SetUpTestCase(){
        pers = new Personnel();    
        persname = new Personnel("Gordon Zuehlke", "Brooklyn, NY");    
    }

    //static void TearDownTestCase(){
        //delete aList;
        //aList = nullptr;
    //}
};

Personnel* RandomAFTest::pers = nullptr;
Personnel* RandomAFTest::persname = nullptr;

TEST_F(RandomAFTest, personnel_is_not_null){
  ASSERT_NE(pers, nullptr);
}

TEST_F(RandomAFTest, personnel_name_is_not_null){
  ASSERT_NE(persname->name(), nullptr);
}

TEST_F(RandomAFTest, personnel_has_correct_name){
  ASSERT_STREQ(persname->name(), "Gordon Zuehlke");
}

TEST_F(RandomAFTest, personnel_has_name_length_twenty){
  ASSERT_EQ(strlen(persname->name()), 14);
}

TEST_F(RandomAFTest, personnel_city_is_not_null){
  ASSERT_NE(persname->city(), nullptr);
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

























