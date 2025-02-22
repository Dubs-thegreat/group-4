#include <iostream>
#include <ctime>

using namespace std;

int main() {
    string name;
    int birthYear, birthMonth, birthDay;
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    int currentDay = ltm->tm_mday;
    
    int age = currentYear - birthYear - (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay));
    
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;
    
    return 0;
}
