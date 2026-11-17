//
// Created by 1998s on 4/12/2026.
//

#ifndef LABB4_MAILBOX_H
#define LABB4_MAILBOX_H
#include <vector>

#include "Email.h"

class Mailbox {
    private:
    std::vector<Email> emails;
public :
    Mailbox(size_t n);
    const std::vector<Email>& GetEmails() const;
    Email& operator[](size_t index);
   // const Email& operator[](size_t index) const;
    void push(const Email& email);
    void sortdate();
    void sortwho();
    void sortsub();
};
#endif //LABB4_MAILBOX_H