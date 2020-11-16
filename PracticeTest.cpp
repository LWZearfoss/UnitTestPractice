/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capitalized_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("rAcEcaR");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("dopgod");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("doggod");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\r;\r\r");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\r\r\r");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_short_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("e");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_sorted_presorted)
{
    Practice obj;
    int first = 3, second = 2, third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_ascending)
{
    Practice obj;
    int first = 1, second = 2, third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_presorted_duplicate)
{
    Practice obj;
    int first = 3, second = 3, third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 3);
    ASSERT_EQ(third, 2);
}

TEST(PracticeTest, is_sorted_ascending_duplicate)
{
    Practice obj;
    int first = 1, second = 1, third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 2);
    ASSERT_EQ(second, 1);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_random1)
{
    Practice obj;
    int first = 2, second = 3, third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_random2)
{
    Practice obj;
    int first = 2, second = 1, third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_random_duplicate)
{
    Practice obj;
    int first = 2, second = 1, third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 2);
    ASSERT_EQ(second, 2);
    ASSERT_EQ(third, 1);
}

TEST(PracticeTest, is_sorted_all_duplicate)
{
    Practice obj;
    int first = 1, second = 1, third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 1);
    ASSERT_EQ(second, 1);
    ASSERT_EQ(third, 1);
}
