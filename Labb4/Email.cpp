//
// Created by 1998s on 4/12/2026.
//
#include "Email.h"

Email::Email(std::string who, std::string subject, std::string date) : who(who), subject(subject), date(date) {
}
Email::Email() {
    who = "";
    subject = "";
    date = "";
}

std::ostream& operator<<(std::ostream& os, const Email& email) {
    os << email.who << ", " << email.subject << ", " << email.date;
    return os;
}







