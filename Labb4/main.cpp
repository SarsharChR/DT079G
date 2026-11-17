#include <iostream>
#include <vector>
#include "mailbox.h"

template <typename T>
void Show(const std::vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Mailbox mails(3);

    mails[0] = Email("Anders", "2002-02-28", "lab 1");
    mails[1] = Email("Bertil", "2002-03-01", "homework");
    mails[2] = Email("Anders", "2002-02-28", "lab 2");

    mails.push(Email("Sarshar", "2026-04-16", "lab 4"));

    Show(mails.GetEmails());
    mails.sortwho();
    std::cout << "------" << std::endl;
    Show(mails.GetEmails());

    mails.sortdate();
    std::cout << "------" << std::endl;
    Show(mails.GetEmails());

    mails.sortsub();
    std::cout << "------" << std::endl;
    Show(mails.GetEmails());


    return 0;
}