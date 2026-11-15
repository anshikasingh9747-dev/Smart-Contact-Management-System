#include "../include/Contact.h"
#include <iostream>

using namespace std;

Contact::Contact() {
id = 0;
}

Contact::Contact(int id, string name, string phone,
string email, string city, string notes) {
this->id = id;
this->name = name;
this->phone = phone;
this->email = email;
this->city = city;
this->notes = notes;
}

int Contact::getId() const {
return id;
}

string Contact::getName() const {
return name;
}

string Contact::getPhone() const {
return phone;
}

string Contact::getEmail() const {
return email;
}

string Contact::getCity() const {
return city;
}

string Contact::getNotes() const {
return notes;
}

void Contact::setName(string name) {
this->name = name;
}

void Contact::setPhone(string phone) {
this->phone = phone;
}

void Contact::setEmail(string email) {
this->email = email;
}

void Contact::setCity(string city) {
this->city = city;
}

void Contact::setNotes(string notes) {
this->notes = notes;
}

void Contact::display() const {
cout << "\nID: " << id;
cout << "\nName: " << name;
cout << "\nPhone: " << phone;
cout << "\nEmail: " << email;
cout << "\nCity: " << city;
cout << "\nNotes: " << notes << endl;
}