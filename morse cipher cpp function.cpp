

#include <iostream>
#include<string>
using namespace std;
#include<map>
#include<sstream>

int main()

{
    string word;
    string code;
    string token;
    istringstream scin(""); // like cin
    map<int, string>decipher{
        {0,"-----"},
        {1,".----"},
        {2,"..---"},
        {3,"...--"},
        {4,"....-"},
        {5,"....."},
        {6,"-...."},
        {7,"--..."},
        {8,"---.."},
        {9,"----."},
    };
    map<char, string> cipher{ {'a',".-"},
        {'b',"-..."},
        {'c',"-.-."},
        {'d',"-.."},
        {'e',"."},
        {'f',"..-."},
        {'g',"--."},
        {'h',"...."},
        {'i',".."},
        {'j',".---"},
        {'k',"-.-"},
        {'l',".-.."},
        {'m',"--"},
        {'n',"-."},
        {'o',"---"},
        {'p',".--."},
        {'q',"--.-"},
        {'r',".-."},
        {'s',"..."},
        {'t',"-"},
        {'u',"..-"},
        {'v',"...-"},
        {'w',".--"},
        {'x',"-..-"},
        {'y',"-.--"},
        {'z',"--.."},
        {'0',"-----"},
        {'1',".----"},
        {'2',"..---"},
        {'3',"...--"},
        {'4',"....-"},
        {'5',"....."},
        {'6',"-...."},
        {'7',"--..."},
        {'8',"---.."},
        {'9',"----."},
        {' ',"x"}
    };
    int choice;

    cout << "choose 1 for encryption or 2 for decryption: \n";
    cin >> choice;
    if (choice == 2) {
        cout << "pls enter the encrypted letters with spaces between it:\n";
        cout << "if you want a space pls enter character x\n";
        cin.ignore();
        getline(cin, code);
       scin.str(code);
        
        scin >> token;  // read every token and check if it is in the cipher map or not
        while (scin) {
            
            
            for (char letter = 31; letter < 122; letter++) {
                if (cipher[letter] == token) {
                    cout << letter;
                }
            }
            for (int i = 0; i <= 9; i++) {
                if (decipher[i] == token) {
                    cout << i;
                }
            }



            scin >> token;


        }
        cout << endl;


    }
    else if (choice == 1) {
        cout << "pls enter a Text to encrypt: ";
        cin.ignore();
        getline(cin, word);
        for (int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]); // convert all characters to lower case
        }
        for (char letter : word) {
            cout << cipher[letter] << " ";
        }

    }

}
