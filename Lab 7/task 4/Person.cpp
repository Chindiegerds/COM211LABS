#include "Person.h"

Person::Person() {
    mFirstName = "";
    mAge = 0;
    mWeight = 0.0f;
}
Person::Person(string name, float weight){// no age was asked to be assigned thus assign 0 as a default
    mFirstName = name;
    mWeight = weight;
    mAge = 0;
}
Person::~Person() {

}
float Person::operator + (const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
float Person::operator - (const Person& otherPerson) {
    return mWeight - otherPerson.mWeight;
}
bool Person::operator == (const Person& otherPerson) {
    return mWeight == otherPerson.mWeight;
}

bool Person::operator != (const Person& otherPerson) {
    return mWeight != otherPerson.mWeight;
}
bool Person::operator < (const Person& otherPerson) {
    return mWeight < otherPerson.mWeight;
}
bool Person::operator > (const Person& otherPerson) {
    return mWeight > otherPerson.mWeight;
}
Person::operator int(){
    return mAge;
}
Person::operator float(){
    return mWeight;
}
Person::operator string(){
    return mFirstName;
}