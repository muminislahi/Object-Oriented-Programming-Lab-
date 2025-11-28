#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours, minutes;
    char meridian;  

public:
    
    void get12Hour() {
        cout << "Enter time (hh mm A/P): ";
        cin >> hours >> minutes >> meridian;
    }

    
    void convertTo24() {
        int h = hours;

        if (meridian == 'A' || meridian == 'a') {
            if (h == 12)
                h = 0;   
        }
        else if (meridian == 'P' || meridian == 'p') {
            if (h != 12)
                h += 12; 
        }

        cout << "24-hour format: "
             << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << minutes
             << endl;
    }

    
    void get24Hour() {
        cout << "Enter time (hh mm): ";
        cin >> hours >> minutes;
    }

    
    void convertTo12() {
        int h = hours;
        char m;

        if (h == 0) {
            h = 12;
            m = 'A';
        }
        else if (h < 12) {
            m = 'A';
        }
        else if (h == 12) {
            m = 'P';
        }
        else { 
            h -= 12;
            m = 'P';
        }

        cout << "12-hour format: "
             << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << minutes
             << " " << m << "M" << endl;
    }
};

int main() {
    Time t;
    int choice;

    cout << "1. Convert 12-hour to 24-hour\n";
    cout << "2. Convert 24-hour to 12-hour\n";
    cin >> choice;

    if (choice == 1) {
        t.get12Hour();
        t.convertTo24();
    }
    else {
        t.get24Hour();
        t.convertTo12();
    }

    return 0;
}
