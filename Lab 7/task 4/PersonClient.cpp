#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;
    float weightDifference = John - Jane;

    cout << "Total weight: " << totalWeight << endl;
    cout << "Weight difference: " << weightDifference << endl;

    if (Jane == John){
        cout << "This is the same person" << endl;
    }

    if (Jane != John){
        cout << "This is NOT the same person" << endl;
    }
    if (Jane < John){
        cout << "Jane is younger than John" << endl;
    }

    if (John > Jane){
        cout << "John is older than Jane" << endl;
    }
    int johnAge = John;
    cout << "John's age: " << johnAge << endl;

    string janeFirstName = Jane;
    cout  << "Jane's firstname: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << endl;
    int h;

    return 0;
}