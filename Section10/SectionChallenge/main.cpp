#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string word {};
    string cypher {};
    cout << "Enter the text you would like to encrypt: ";
    getline(cin, word);

    cout << "\nEncrypting message..." << endl;
    for (size_t i{0}; i < word.length(); i++) {
        size_t key_index = alphabet.find(word.at(i));
        cypher += ((key_index != string::npos) ? key.at(key_index) : word.at(i));
    }

    cout << "Encrypted message: " << cypher << endl;

    word.clear();
    cout << "\nNow enter a secret message to decrypt: ";
    getline(cin, cypher);

    cout << "\nDecrypting message..." << endl;
    cout << "\nEncrypting message..." << endl;
    for (size_t i{0}; i < cypher.length(); i++) {
        size_t key_index = key.find(cypher.at(i));
        word += ((key_index != string::npos) ? alphabet.at(key_index) : cypher.at(i));
    }

    cout << "Decrypted message: " << word << endl;

    cout << endl;
    return 0;
}