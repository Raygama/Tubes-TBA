#include <iostream>
#include <string>
#include <Stack>
using namespace std;
bool subject(string word);

bool subject(string word) {
    bool ret = false;
    string state = "A";
    for(int i = 0;i < word.length();i++) {
        //cout << state << endl;
        if(word[i] == 'S'){
            if(state == "A"){
                state = "B";
                ret=false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'K') {
            if(state == "A" ){
                state = "C";
                ret=false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'k') {
            if (state == "V") {
                state = "W";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'D') {
            if(state == "A") {
                state = "D";
                ret=false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'M') {
            if (state == "A") {
                state = "E";
                ret=false;
            } else{
                ret = false;
            }
        } else if (word[i] == 'm') {
            if (state == "I") {
                state = "J";
                ret = false;
            } else {
                ret = false;
            }
        } else if(word[i] == 'a'){
            if (state == "B"){
                state = "F";
                ret=false;
            } else if (state == "G") {
                state = "H";
                ret=true;
            } else if (state == "C") {
                state = "I";
                ret = false;
            } else if (state == "M") {
                state = "N";
                ret = false;
            } else if (state == "R") {
                state = "S";
                ret = true;
            } else if (state == "W") {
                state = "X";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'y') {
            if (state == "F") {
                state = "G";
                ret=false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'u' ){
            if (state == "J") {
                state = "K";
                ret=true;
            } else {
                ret = false; 
            }
        } else if(word[i] == 'i'){
            if (state == "L") {
                state = "M";
                ret=false;
            } else if (state == "D") {
                state = "R";
                ret = false;
            }else{
                ret = false;
            }  
        } else if (word[i] == 'n') {
            if (state == "N") {
                state = "O";
                ret = true;
            }
        } else if (word[i] == 'e') {
            if (state == "E") {
                state = "T";
                ret = false;
            } else if (state == "U") {
                state = "V";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'r') {
            if (state == "T") {
                state = "U";
                ret = false;
            }
        } else if (word[i] == 'l') {
            if (state == "I") {
                state = "L";  
                ret = false;
            } else {
                ret = false;
            }
        } else {
            ret = false;
        }
    }
return ret;
}

bool keterangan(string word) {
    bool ret = false;
    string state = "A";
    for(int i = 0;i < word.length();i++) {
        //cout << state << endl;
        if (word[i] == 'd') {
            if (state == "A") {
                state = "B";
                ret = false;
            } else if (state == "X") {
                state = "K";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'i') {
            if (state == "B") {
                state = "C";
                ret = false;
            } else if (state == "H") {
                state = "J";
                ret = true;
            } else if (state == "D") {
                state = "F";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == ' ') {
            if (state == "C") { 
                state = "X";
                ret = false;
            }
        } else if (word[i] == 's') {
            if (state == "X") {
                state = "D"; 
                ret = false;
            } else if (state == "R") {
                state = "S";
                ret = true;
            }
        } else if (word[i] == 'a') {
            if (state == "X") {
                state = "P";
                ret = false;
            } else if (state == "D") {
                state = "E";
                ret = false;
            } else if (state == "G") {
                state = "I";
                ret = true;
            } else if (state == "M") {
                state = "N";
                ret = false;
            } else if (state == "Q") {
                state = "R";
                ret = false;
            } else if (state == "T") {
                state = "U";
                ret = false;
            } else if (state == "V") {
                state = "W";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'b') {
            if (state == "X") {
                state = "T";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'n') {
            if (state == "E") {
                state = "G";
                ret = false;
            } else if (state == "F") {
                state = "H";
                ret = false;
            } else if (state == "N") {
                state = "O";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'e') {
            if (state == "K") {
                state = "L";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'p') {
            if (state == "L") {
                state = "M";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 't') {
            if (state == "P") {
                state = "Q";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'w') {
            if (state == "U") {
                state = "V";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'h') {
            if (state == "W") {
                state = "H";
                ret = true;
            } else {
                ret = false;
            }
        } else {
            ret = false;
        }
    }
    return ret;
}
int main() {
    cout << subject("Kalian") << endl;
    cout << keterangan("diatas") << endl;
}