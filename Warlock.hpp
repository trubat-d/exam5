#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Warlock
{
private:
    string name;
    string title;
    Warlock() {};
    Warlock(const Warlock &ref) {this->name = ref.name; this->title=ref.title;};
    Warlock &operator=(const Warlock &ref) {this->name = ref.name; this->title=ref.title; return *this;};
    SpellBook book;
public:
    Warlock(const string &name, const string &title);
    ~Warlock();
    const string &getName() const;
    const string &getTitle() const;
    void setTitle(const string &ref);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(string name);
    void launchSpell(string name, ATarget const &ref);
};

#endif