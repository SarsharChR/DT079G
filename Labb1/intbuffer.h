//
// Created by 1998s on 2/11/2026.
//

#ifndef UNTITLED1_INTBUFFER_H
#define UNTITLED1_INTBUFFER_H

#include <cstdlib>
#include <utility>
#include <algorithm>

class int_buffer {
public :
    //rule 5
explicit int_buffer ( size_t size ) ; // size_t is defined in cstdlib
    int_buffer ( const int * source , size_t size ) ;
    int_buffer ( const int_buffer & rhs ) ; // copy construct, rule 2
    int_buffer ( int_buffer && rhs )noexcept ; // move construct, rule 4
    int_buffer & operator =( const int_buffer &rhs ) ; // copy assign, rule 3
    int_buffer & operator =( int_buffer && rhs )noexcept ; // move assign, rule 5
    int & operator []( size_t index ) ;
    const int & operator []( size_t index ) const ;
    size_t size () const ;
    int * begin () ;
    int * end () ;
    const int * begin () const ;
    const int * end () const ;
    ~int_buffer () ; // rule 1

    //A successful solution
    friend void swap ( int_buffer & lhs , int_buffer & rhs ) noexcept {
        using std::swap;
        swap(lhs.first_bf, rhs.first_bf);
        swap(lhs.last_bf, rhs.last_bf);
    }

private :
    int* first_bf;
    int* last_bf;
};

#endif //UNTITLED1_INTBUFFER_H