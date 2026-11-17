//
// Created by 1998s on 2/16/2026.
//

#include "intbuffer.h"


int_buffer::int_buffer(size_t size): first_bf (new int[size]),
last_bf(first_bf + size) {

};

int_buffer::int_buffer(const int *source, size_t size):int_buffer(size) {
    std::copy(source, source + size, first_bf);
}

int_buffer::int_buffer(const int_buffer & rhs ):int_buffer(rhs.begin(),rhs.size()){};

int_buffer::int_buffer(int_buffer&& rhs) noexcept: first_bf(nullptr), last_bf(nullptr)
{
    *this = std::move(rhs);
}

int_buffer& int_buffer::operator =( int_buffer && rhs ) noexcept {
    swap(*this,rhs);
    return *this ;
}

int_buffer& int_buffer::operator=(const int_buffer& rhs)
{
int_buffer temp(rhs);
    swap(*this,temp);
    return *this ;
}

int & int_buffer::operator []( size_t index ) {
    int*i = first_bf + index;
    return *i;
}

const int & int_buffer::operator []( size_t index )const {
    const int*i = first_bf + index;
    return *i;
}

size_t int_buffer::size() const {
    return last_bf - first_bf;
}
int* int_buffer::begin() {
    return first_bf;
}

int* int_buffer::end() {
    return last_bf;
}

const int * int_buffer::begin () const {
    return first_bf;
}

const int * int_buffer::end () const {
    return last_bf;
}

int_buffer::~int_buffer() {
    delete[] first_bf;
}

