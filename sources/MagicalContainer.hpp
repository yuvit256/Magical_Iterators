#pragma once
#include <vector>
using namespace std;

namespace ariel
{
    class MagicalContainer
    {
    private:
        // vector<int> magical_container;
    public:
        MagicalContainer() {}
        void addElement(int) {}
        void removeElement(int) {}
        int size() const { return 0;}

        class AscendingIterator
        {
        public:
            AscendingIterator(MagicalContainer magical_container){}
            AscendingIterator(){}
            AscendingIterator(AscendingIterator &other){}
            ~AscendingIterator(){}
            void operator=(const AscendingIterator &other){}
            bool operator==(const AscendingIterator &other) const {return false;}
            bool operator!=(const AscendingIterator &other) const {return false;}
            bool operator<(const AscendingIterator &other) const {return false;}
            bool operator>(const AscendingIterator &other) const {return false;}
            int operator*() const {return 0;}
            AscendingIterator operator++() {return *this;}
            AscendingIterator begin() {return *this;}
            AscendingIterator end() {return *this;}
        };
        class SideCrossIterator
        {
        public:
            SideCrossIterator(MagicalContainer magical_container) {}
            SideCrossIterator() {}
            SideCrossIterator(SideCrossIterator &other) {}
            ~SideCrossIterator() {}
            void operator=(const SideCrossIterator &other) {}
            bool operator==(const SideCrossIterator &other) const {return false;}
            bool operator!=(const SideCrossIterator &other) const {return false;}
            bool operator<(const SideCrossIterator &other) const {return false;}
            bool operator>(const SideCrossIterator &other) const {return false;}
            int operator*() const {return 0;}
            SideCrossIterator operator++() {return *this;}
            SideCrossIterator begin() {return *this;}
            SideCrossIterator end() {return *this;}
        };
        class PrimeIterator
        {
        public:
            PrimeIterator(MagicalContainer magical_container) {}
            PrimeIterator() {}
            PrimeIterator(PrimeIterator &other) {}
            ~PrimeIterator() {}
            void operator=(const PrimeIterator &other) {}
            bool operator==(const PrimeIterator &other) const {return false;}
            bool operator!=(const PrimeIterator &other) const {return false;}
            bool operator<(const PrimeIterator &other) const {return false;}
            bool operator>(const PrimeIterator &other) const {return false;}
            int operator*() const {return 0;}
            PrimeIterator operator++() {return *this;}
            PrimeIterator begin() {return *this;}
            PrimeIterator end() {return *this;}
        };

    };
};