#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

class Contact {
private:
int id;
string name;
string phone;
string email;
string city;
string notes;

public:
Contact();
Contact(int id, string name, string phone,
string email, string city, string notes);

int getId() const;
string getName() const;
string getPhone() const;
string getEmail() const;
string getCity() const;
string getNotes() const;

void setName(string name);
void setPhone(string phone);
void setEmail(string email);
void setCity(string city);
void setNotes(string notes);

void display() const;

};

#endif