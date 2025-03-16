#include"Animal.h"
#include"Lion.h"
#include"Elephant.h"
#include"Eagle.h"
#include"Penguin.h"

#include <gtest.h>


//lion
TEST(Animals, can_create_lion_with_correct_valid)
{
  ASSERT_NO_THROW (Lion l("tom", 3, 3.45));
}

TEST(Animals, throws_when_create_lion_with_empty_name)
{
  ASSERT_ANY_THROW(Lion l("", 3, 3.45));
}

TEST(Animals, throws_when_create_lion_with_negative_age)
{
  ASSERT_ANY_THROW(Lion l("tom", -1, 3.45));
}

TEST(Animals, throws_when_create_lion_with_negative_furlenght)
{
  ASSERT_ANY_THROW(Lion l("tom", 3, -1));
}

TEST(Animals, throws_when_create_lion_with_incorrect_valid)
{
  ASSERT_ANY_THROW(Lion l("", -1, -1));
}
//elephant
TEST(Animals, can_create_elephant_with_correct_valid)
{
  ASSERT_NO_THROW(Elephant l("tom", 3, 3.45));
}

TEST(Animals, throws_when_create_elephant_with_empty_name)
{
  ASSERT_ANY_THROW(Elephant l("", 3, 3.45));
}

TEST(Animals, throws_when_create_elephant_with_negative_age)
{
  ASSERT_ANY_THROW(Elephant l("tom", -1, 3.45));
}

TEST(Animals, throws_when_create_elephant_with_negative_furlenght)
{
  ASSERT_ANY_THROW(Elephant l("tom", 3, -1));
}

TEST(Animals, throws_when_create_elephant_with_incorrect_valid)
{
  ASSERT_ANY_THROW(Elephant l("", -1, -1));
}

//eagle
TEST(Animals, can_create_eagle_with_correct_valid)
{
  ASSERT_NO_THROW(Eagle l("tom", 3, 3.45));
}

TEST(Animals, throws_when_create_eagle_with_empty_name)
{
  ASSERT_ANY_THROW(Eagle l("", 3, 3.45));
}

TEST(Animals, throws_when_create_eagle_with_negative_age)
{
  ASSERT_ANY_THROW(Eagle l("tom", -1, 3.45));
}

TEST(Animals, throws_when_create_eagle_with_negative_wingspan)
{
  ASSERT_ANY_THROW(Eagle l("tom", 3, -1));
}

TEST(Animals, throws_when_create_eagle_with_incorrect_valid)
{
  ASSERT_ANY_THROW(Eagle l("", -1, -1));
}

//penguin
TEST(Animals, can_create_penguin_with_correct_valid)
{
  ASSERT_NO_THROW(Penguin l("tom", 3, 3.45));
}

TEST(Animals, throws_when_penguin_eagle_with_empty_name)
{
  ASSERT_ANY_THROW(Penguin l("", 3, 3.45));
}

TEST(Animals, throws_when_create_penguin_with_negative_age)
{
  ASSERT_ANY_THROW(Penguin l("tom", -1, 3.45));
}

TEST(Animals, throws_when_create_penguin_with_negative_wingspan)
{
  ASSERT_ANY_THROW(Penguin l("tom", 3, -1));
}

TEST(Animals, throws_when_create_penguin_with_incorrect_valid)
{
  ASSERT_ANY_THROW(Penguin l("", -1, -1));
}
