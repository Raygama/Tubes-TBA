#include <iostream>
#include <string>
#include <Stack>
using namespace std;
bool subject(string word);
bool predikat(string word);
bool object(string word);
bool keterangan(string word);

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

bool predikat(string word){
    bool ret = false;
    string state = "A";
    for(int i = 0;i < word.length();i++){
        if (word[i] == 'm'){
            if (state == "A"){
                state = "B";
                ret = false;
            } else {
                ret =  false;
            }
        } else if (word[i] == 'a'){
            if (state == "B"){
                state = "C";
                ret = false;
            } else if (state == "F"){
                state = "G";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'i'){
            if (state == "C"){
                state = "D";
                ret = false;
            } else if (state == "N"){
                state = "O";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'k'){
            if (state == "C"){
                state = "F";
                ret = false;
            } else if (state == "K"){
                state = "L";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 's'){
            if (state == "C"){
                state = "J";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'n'){
            if (state == "C"){
                state = "M";
                ret = false;
            } else if (state == "D"){
                state = "E";
                ret = true;
            } else if (state == "G"){
                state = "H";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'u'){
            if (state == "C"){
                state = "I";
                ret = true;
            } else if (state == "J"){
                state = "K";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'd'){
            if (state == "M"){
                state = "N";
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

bool object(string word){
    bool ret = false;
    string state = "A";
    for(int i = 0;i < word.length();i++){
        //cout << state << endl;
        if (word[i] == 's'){
            if (state == "A"){
                state = "B";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'k'){
            if (state == "A"){
                state = "C";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'p'){
            if (state == "A"){
                state = "D";
                ret = false;
            } else if (state == "M") {
                state = "G";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 't'){
            if (state == "A"){
                state = "E";
                ret = false;
            } else if (state == "H") {
                state = "I";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'u'){
            if (state == "B"){
                state = "F";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'i'){
            if (state == "C"){
                state = "J";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'a'){
            if (state == "D"){
                state = "K";
                ret = false;
            } else if (state == "G"){
                state = "H";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'e'){
            if (state == "E"){
                state = "L";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'r'){
            if (state == "F"){
                state = "G";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'l'){
            if (state == "J"){
                state = "G";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'h'){
            if (state == "K"){
                state = "G";
                ret = false;
            } else if (state == "L"){
                state = "N";
                ret = true;
            } else {
                ret = false;
            }
        } else if (word[i] == 'm'){
            if (state == "L"){
                state = "M";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 'p'){
            if (state == "M"){
                state = "G";
                ret = false;
            } else {
                ret = false;
            }
        } else if (word[i] == 't'){
            if (state == "H"){
                state = "I";
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
    string sentence;
    string arr[100];
    string words[10];
    stack<string> mystack;
    int counter = 0;
    cout << "Masukan kata : ";
    getline(cin, sentence);
    string output;

    bool isDi = false; // Menandakan apakah "di" telah ditemukan
    string tempWord = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence.substr(i, 2) == "di" && (i == 0 || sentence[i-1] == ' ')) {
            isDi = true;
            tempWord += "di";
            i += 1; // Langsung lompat setelah "di"
        } else if (sentence[i] == ' ' && !isDi) {
            if (!tempWord.empty()) {
                words[counter++] = tempWord;
                tempWord = "";
            }
        } else if (sentence[i] == ' ' && isDi) {
            tempWord += sentence[i];
            isDi = false; // Menyelesaikan penggabungan "di" dengan kata berikutnya
        } else {
            tempWord += sentence[i];
        }
    }

    if (!tempWord.empty()) {
        words[counter++] = tempWord; // Menyimpan kata terakhir
    }
    
    mystack.push("#");
    string states = "B";
    for (int i = 0; i <= counter-1; i++) {
        if (subject(words[i])) {
            output += "S";
            if (i != counter-1) {
                output += "-";
            }
            if (states == "B") {
                mystack.push("S");
                states = "C";
            }
        } else if (predikat(words[i])) {
            output += "P";
            if (i != counter-1) {
                output += "-";
            }

            if (states == "C") {
                if (mystack.top() == "S") {
                    mystack.pop();
                    mystack.push("P");
                    states = "D";
                }
                
                if (i == counter - 1) {
                    if (mystack.top() == "P") {
                        mystack.pop();
                        states = "H";
                    }
                }
            }
        } else if (object(words[i])) {
            output += "O";
            if (i != counter-1) {
                output += "-";
            }
            if (states == "D") {
                if (mystack.top() == "P") {
                    mystack.pop();
                    mystack.push("O");
                    states = "E";
                }

                if (i == counter-1) {
                    if (mystack.top() == "O") {
                        mystack.pop();
                        states = "H";
                    }
                }
            }
        } else if (keterangan(words[i])) {
            output += "K";
            if (i != counter-1) {
                output += "-";
            }
            if (states == "D") {
                if (mystack.top() == "P") {
                    mystack.pop();
                    mystack.push("K");
                    states = "F";
                }
            } else if (states == "E") {
                if (mystack.top() == "O") {
                    mystack.pop();
                    mystack.push("K");
                    states = "G";
                }
            }
            if (i == counter-1) {
                if (mystack.top() == "K") {
                    mystack.pop();
                    states = "H";
                }
            }
        } else {
            output += "Tidak diketahui";
            if (i != counter-1) {
                output += "-";
            }
            mystack.push("e");
        }
    }
    if (states == "H") {
        if (mystack.top() == "#") {
            mystack.pop();
        }
    }
    if (mystack.empty()) {
        cout << "KALIMAT" << endl;
    } else {
        cout << "BUKAN KALIMAT" << endl;
    }
    cout << "Struktur Kalimat : " << output << endl; 
}