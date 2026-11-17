//
// Created by 1998s on 4/12/2026.
//
#include <string>
#include <iostream>
#ifndef LABB4_EMAIL_H
#define LABB4_EMAIL_H
class Email {
private :
    std::string who;
    std::string date;
    std::string subject;
public :
    Email();
    Email(std::string who, std::string date, std::string subject);
    friend std::ostream& operator<<(std::ostream& os, const Email& email);
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWhoDate;
};
#endif //LABB4_EMAIL_H

struct CompWhoDateSubject {
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.who < rhs.who) return true;
        else if (lhs.who == rhs.who) {
            if (lhs.date < rhs.date) return true;
            else if (lhs.date == rhs.date)
                if (lhs.subject < rhs.subject) return true;
        }
        return false;
    }
};

struct CompSubjectWhoDate{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.subject < rhs.subject) return true;
        else if (lhs.subject ==  rhs.subject) {
            if (lhs.who < rhs.who) return true;
            else if (lhs.who == rhs.who)
                if (lhs.date < rhs.date) return true;
        }
        return false;
    }
};

struct CompDateWhoSubject {
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.date < rhs.date) return true;
        else if (lhs.date == rhs.date) {
            if (lhs.who < rhs.who) return true;
            else if (lhs.who == rhs.who)
                if (lhs.subject < rhs.subject) return true;

        }
        return false;
    }

};