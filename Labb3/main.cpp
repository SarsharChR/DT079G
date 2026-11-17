#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "pq.h"

struct buy_order {
    std::string buyer;
    int price;
};

struct sell_order {
    std::string seller;
    int price;
};

struct comp_buy {
    bool operator()(const buy_order& lhs, const buy_order& rhs) const {
        return lhs.price > rhs.price;   // lägst pris har högst prioritet
    }
};

struct comp_sell {
    bool operator()(const sell_order& lhs, const sell_order& rhs) const {
        return lhs.price > rhs.price;   // lägst pris har högst prioritet
    }
};

int main() {

    //pq<buy_order, comp_buy> buyq;

   // buyq.push({"Erik", 25});
    //buyq.push({"Sara", 18});
    //buyq.push({"John", 30});

    //auto x = buyq.top();
   // std::cout << "top buyer: " << x.buyer << " price: " << x.price << "\n"; // Sara 18
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    pq<buy_order, comp_buy> buy_queue;
    pq<sell_order, comp_sell> sell_queue;

    std::string names[3] = {
        "Erik Pendel",
        "Jarl Wallenburg",
        "Joakim von Anka"
    };

    // 21 köpordrar och 21 säljordrar
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            buy_order b;
            b.buyer = names[i];
            b.price = 15 + std::rand() % 16;   // 15..30

            sell_order s;
            s.seller = names[i];
            s.price = 15 + std::rand() % 16;   // 15..30

            buy_queue.push(b);
            sell_queue.push(s);
        }
    }

    std::cout << "Genomforda affarer:\n";

    while (!buy_queue.empty() && !sell_queue.empty()) {
        buy_order buyer = buy_queue.top();
        sell_order seller = sell_queue.top();

        if (seller.price < buyer.price) {
            buy_queue.pop();
            sell_queue.pop();

            std::cout << buyer.buyer
                      << " koper av "
                      << seller.seller
                      << " for "
                      << buyer.price
                      << " kr"
                      << '\n';
        } else {
            buy_queue.pop(); // ogiltig köporder kastas
        }
    }

    return 0;
}