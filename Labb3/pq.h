//
// Created by 1998s on 3/9/2026.
//

#ifndef LABB3_PQ_H
#define LABB3_PQ_H
#include <algorithm>
#include <vector>
#include <functional>

template< typename T, typename COMP = std::less<>>
class pq {
private:
    std::vector<T>data;
    COMP comp;
public:
    pq();
    pq(COMP comp);
    template <typename IT>
    pq (IT first, IT last, COMP comp = COMP());
    void  push (T element);
    T top() const;
    T pop();
    bool empty() const;
    size_t size() const;
};

template<typename T, typename COMP>
pq<T, COMP>::pq() : data(), comp(COMP()) {
}

template<typename T, typename COMP>
pq<T, COMP>::pq(COMP comp) : data(), comp(comp) {
}

template<typename T, typename COMP>
template<typename IT>
pq<T, COMP>::pq(IT first, IT last, COMP comp) : data(first, last), comp(comp) {
    std::make_heap(data.begin(), data.end(), comp);
}

template<typename T, typename COMP>
void pq<T, COMP>::push(T element) {
    data.push_back(element);
    std::push_heap(data.begin(), data.end(), comp);
}

template<typename T, typename COMP>
T pq<T, COMP>::top() const {
    return data.front();
}

template<typename T, typename COMP>
T pq<T, COMP>::pop() {
    std::pop_heap(data.begin(), data.end(), comp);
    T value = data.back();
    data.pop_back();
    return value;
}

template<typename T, typename COMP>
bool pq<T, COMP>::empty() const {
    return data.empty();
}

template<typename T, typename COMP>
size_t pq<T, COMP>::size() const {
    return data.size();
}



#endif //LABB3_PQ_H