//
// Created by 1998s on 3/3/2026.
#include "int_sorted.h"
int_sorted int_sorted::sort(const int* begin, const int* end) {
    if (begin == end)
        return int_sorted(nullptr, 0);

    if (begin == end - 1)
        return int_sorted(begin, 1);

    ptrdiff_t half = (end - begin) / 2;
    const int* mid = begin + half;

    return sort(begin, mid).merge(sort(mid, end));
}

int_sorted::int_sorted(const int* source, size_t n) :buff(source,n) {
    if (buff.size() > 1) {
        sort(buff.begin(), buff.end());
    }

}

size_t int_sorted::size() const{
    return buff.size();
}

const int* int_sorted::begin() const {
    return buff.begin();
}

const int* int_sorted::end() const {
    return buff.end();
}

void int_sorted::insert(int value) {
     int_sorted temp(&value,1);
    *this = this -> merge(temp);
}

int_sorted int_sorted::merge(const int_sorted &merge_with) const {
    auto A = this->begin();
    auto B = merge_with.begin();

    size_t tsize = this->buff.size() + merge_with.buff.size();
    int_buffer temp(tsize);

    size_t i = 0;

    while (A != this->end() && B != merge_with.end()) {
        if (*A < *B) {
            temp[i] = *A;
            ++A;
        } else {
            temp[i] = *B;
            ++B;
        }
        ++i;
    }

    while (A != this->end()) {
        temp[i] = *A;
        ++A;
        ++i;
    }

    while (B != merge_with.end()) {
        temp[i] = *B;
        ++B;
        ++i;
    }

    int_sorted C(nullptr,0);
    C.buff = std::move(temp);
    return C;
}