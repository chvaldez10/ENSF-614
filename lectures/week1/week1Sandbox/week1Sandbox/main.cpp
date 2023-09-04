#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

void populateMap(const string& from, const string& to, map<char, char>& targetMap) {
    if (from.size() != to.size()) {
        cout << "The two strings should have the same size." << endl;
        exit(1); // Exit the program
    }
    for (size_t i = 0; i < from.size(); ++i) {
        targetMap[from[i]] = to[i];
    }
}

string transformMessage(const string& message, const map<char, char>& transformer) {
    string output = "";
    for (const char& c : message) {
        if (transformer.find(c) != transformer.end()) {
            output += transformer.at(c);
        }
        else {
            output += c;
        }
    }
    return output;
}

int main() {
    map<char, char> alphabetEncrypter;
    map<char, char> alphabetDecrypter;
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm" };

    populateMap(alphabet, key, alphabetEncrypter);
    populateMap(key, alphabet, alphabetDecrypter);

    string userMessage;
    cout << "Enter your message: ";
    getline(cin, userMessage);
    cout << "Your message before encryption: " << userMessage << endl;

    string encryptedMessage = transformMessage(userMessage, alphabetEncrypter);
    cout << "Encrypted message = " << encryptedMessage << endl;

    string decryptedMessage = transformMessage(encryptedMessage, alphabetDecrypter);
    cout << "Decrypted message = " << decryptedMessage << endl;

    return 0;
}
