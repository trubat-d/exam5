#include "Warlock.hpp"

Warlock::Warlock(const string &name, const string &title) : name(name), title(title)
{
    cout << this->name << ": This looks like another boring day." << endl; 
}

Warlock::~Warlock()
{ 
    cout << this->name << ": My job here is done!" << endl; 
}

void Warlock::setTitle(const string &ref) 
{
    this->title = ref;
}

void Warlock::introduce() const
{
    cout << this->name << ": I am " << this->name << ", " << this->title << "!"  << endl;
}

const string &Warlock::getTitle() const 
{
    return this->title;
}

const string &Warlock::getName() const 
{
    return this->name;
}

void Warlock::learnSpell(ASpell *spell)
{
    this->book.learnSpell(spell);
}

void Warlock::forgetSpell(string name)
{
    this->book.forgetSpell(name);
}

void Warlock::launchSpell(string name, ATarget const &ref)
{
    ASpell *temp = this->book.createSpell(name);

    temp->launch(ref);

    delete temp;
}