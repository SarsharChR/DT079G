//
// Created by 1998s on 4/12/2026.
//

#include "Mailbox.h"
#include <algorithm>

Mailbox::Mailbox(size_t n) : emails(n) {
}

const std::vector<Email>& Mailbox::GetEmails() const {
    return emails;
}

Email& Mailbox::operator[](size_t index) {
    return emails[index];
}

//const Email& Mailbox::operator[](size_t index) const {
//    return emails[index];
//}

void Mailbox::push(const Email& email) {
    emails.push_back(email);
}

void Mailbox::sortdate() {
    CompDateWhoSubject compWDS;
    std::sort(emails.begin(), emails.end(), compWDS);
}

void Mailbox::sortwho() {
    std::sort(emails.begin(), emails.end(), CompWhoDateSubject());
}

void Mailbox::sortsub() {
    std::sort(emails.begin(), emails.end(), CompSubjectWhoDate());
}
