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

int main() {
    cout << subject("Kalian") << endl;
}