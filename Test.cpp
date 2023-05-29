#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("Check the MagicalContainer functions")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    CHECK(container.size() == 5);
    container.removeElement(25);
    container.removeElement(9);
    CHECK(container.size() == 3);
}

TEST_CASE("Removing element that does not exist in the container or not adding the same number twice")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    CHECK_THROWS(container.removeElement(42));
    CHECK_THROWS(container.addElement(17));
    container.removeElement(2);
    container.removeElement(3);
    container.removeElement(9);
    container.removeElement(17);
    container.removeElement(25);
    CHECK_THROWS(container.removeElement(66));
}

TEST_CASE("Checking AscendingIterator begin function and operator++ and operator*")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val = ascIter.begin();
    CHECK(*val == 2);
    ++val;
    CHECK(*val == 3);
    ++val;
    CHECK(*val == 9);
    ++val;
    CHECK(*val == 17);
    ++val;
    CHECK(*val == 25);
}

TEST_CASE("Checking SideCrossIterator begin function and operator++ and operator*")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val = crossIter.begin();
    CHECK(*val == 2);
    ++val;
    CHECK(*val == 25);
    ++val;
    CHECK(*val == 3);
    ++val;
    CHECK(*val == 17);
    ++val;
    CHECK(*val == 9);
}

TEST_CASE("Checking PrimeIterator begin function and operator++ and operator*")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val = primeIter.begin();
    CHECK(*val == 2);
    ++val;
    CHECK(*val == 3);
    ++val;
    CHECK(*val == 17);
}

TEST_CASE("Checking AscendingIterator end function")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val = ascIter.end();
    CHECK(*val == 25);
    CHECK_THROWS(++val);
}

TEST_CASE("Checking SideCrossIterator end function")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val = crossIter.end();
    CHECK(*val == 9);
    CHECK_THROWS(++val);
}

TEST_CASE("Checking AscendingIterator end function")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val = primeIter.end();
    CHECK(*val == 17);
    CHECK_THROWS(++val);
}

TEST_CASE("Checking AscendingIterator operator==")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val1 = ascIter.begin();
    auto val2 = ascIter.end();
    CHECK(val1 == val1);
    CHECK(val2 == val2);
}

TEST_CASE("Checking SideCrossIterator operator==")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val1 = crossIter.begin();
    auto val2 = crossIter.end();
    CHECK(val1 == val1);
    CHECK(val2 == val2);
}

TEST_CASE("Checking PrimeIterator operator==")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val1 = primeIter.begin();
    auto val2 = primeIter.end();
    CHECK(val1 == val1);
    CHECK(val2 == val2);
}

TEST_CASE("Checking AscendingIterator operator!=")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val1 = ascIter.begin();
    auto val2 = ascIter.end();
    CHECK(val1 != val2);
    CHECK(val2 != val1);
}

TEST_CASE("Checking SideCrossIterator operator!=")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val1 = crossIter.begin();
    auto val2 = crossIter.end();
    CHECK(val1 != val2);
    CHECK(val2 != val1);
}

TEST_CASE("Checking PrimeIterator operator!=")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(3);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val1 = primeIter.begin();
    auto val2 = primeIter.end();
    CHECK(val1 != val2);
    CHECK(val2 != val1);
}

TEST_CASE("Checking AscendingIterator operator<")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val2 = ascIter.end();
    for (auto val1 = ascIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val1 < val3);
    }
}

TEST_CASE("Checking SideCrossIterator operator<")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val2 = crossIter.end();
    for (auto val1 = crossIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val1 < val3);
    }
}

TEST_CASE("Checking PrimeIterator operator<")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val2 = primeIter.end();
    for (auto val1 = primeIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val1 < val3);
    }
}

TEST_CASE("Checking AscendingIterator operator>")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::AscendingIterator ascIter(container);
    auto val2 = ascIter.end();
    for (auto val1 = ascIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val3 > val1);
    }
}

TEST_CASE("Checking SideCrossIterator operator>")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::SideCrossIterator crossIter(container);
    auto val2 = crossIter.end();
    for (auto val1 = crossIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val3 > val1);
    }
}

TEST_CASE("Checking PrimeIterator operator>")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(5);
    container.addElement(14);
    MagicalContainer::PrimeIterator primeIter(container);
    auto val2 = primeIter.end();
    for (auto val1 = primeIter.begin(); val1 != val2; ++val1)
    {
        auto val3 = val1;
        CHECK(val3 > val1);
    }
}
