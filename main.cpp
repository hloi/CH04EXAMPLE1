#include <iostream>
#include <string>
using namespace std;
//int main() {
//    // ask the user to enter a string
//    // ask the user to enter a character
//    // find out how many time the character exists in the string
//    bool cont = true;
//    while (cont) {
//        string s;
//        cout << "Enter a string: ";
//        getline(cin, s);
//        cout << "Enter a character to search: ";
//        char c;
//        cin >> c;
//        int size = s.size();
//        cout << size << endl;
//        int count = 0;
//        for (int i=0; i<size; i++)
//        {
//            if (s[i] == c) {
//                count++;  // count = count + 1;
//            }
//        }
//        char yn;
//        cout << "letter " << c << ": " << count << endl;
//        cout << "Do you want to continue (y/n): ";
//        cin >> yn;
//        cin.ignore();
//        if (yn != 'y') {
//            cont = false;
//        }
//    }
//    return 0;
//}

//int main() {
//
//    bool cont = true;
//    while (cont) {
//        string s;
//        cout << "Enter a string: ";
//        getline(cin, s);
//        cout << "Enter a word to search: ";
//        string c;
//        cin >> c;
//        int size = s.size();
//        cout << size << endl;
//        int count = 0;
//        int pos = 0;
//        pos = s.find(c);
//        while (pos != string::npos) {
//            count++;
//            pos = s.find(c, pos+1);
//        }
//
//        char yn;
//        cout << "word: " << c << ": " << count << endl;
//        cout << "Do you want to continue (y/n): ";
//        cin >> yn;
//        cin.ignore();
//        if (yn != 'y') {
//            cont = false;
//        }
//    }
//    return 0;
//
//}


int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int pos = s.find(" ");
    int count = 0;
    while (pos != string::npos) {
        count++;
        pos = s.find_first_not_of(" ", pos);
        pos = s.find(" ", pos);
    }
    cout << "word count: " << count+1 << endl;

}