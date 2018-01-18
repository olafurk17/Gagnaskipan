#include "characterarray.h"

CharacterArray::CharacterArray()
{
    ///TODO: Implement
    arr = new char[INITIAL_CAPACITY];
    stringlength = 0;
    arr[0] = '\0';
    arrsize = 4;
}

CharacterArray::CharacterArray(char* str, int length)
{
    ///TODO: Implement
    arr = new char[length*2];
    for(int i = 0; i <= length; i++){
        arr[i] = str[i];
    }
    stringlength = length;
    arrsize = length*2;
}

CharacterArray::~CharacterArray()
{
    ///TODO: Implement
    delete[] arr;
}

void CharacterArray::append(char c) {

    ///TODO: Implement
    arr[length()] = c;
    stringlength++;
    arr[length()] = '\0';
    if(length() == arrsize-1){
        cout << "This is where we double the array.." << endl;
        arrsize = arrsize * 2;
        arr = substring(0, length());
    }
}

void CharacterArray::insert(char c, int index) {

    ///TODO: Implement
    if(index < length()){

    }
    else if(index == length()){
        append(c);
    }
}

void CharacterArray::setAt(char c, int index) {

    ///TODO: Implement
}

char CharacterArray::getAt(int index) {

    ///TODO: Implement
    try {
        if(index > arrsize){
            throw IndexOutOfBoundsException();
        }
        else {
            return arr[index];
        }
    }
}

char CharacterArray::pop_back() {

    //Example of throwing an exception
    if(isEmpty()) {
        throw EmptyException();
    }

    ///TODO: Implement
    return '\0'; //change or remove this line
}

char CharacterArray::removeAt(int index) {

    ///TODO: Implement
    return '\0'; //change or remove this line
}

void CharacterArray::clear() {

    ///TODO: Implement
}

int CharacterArray::length() {

    ///TODO: Implement
    return this->stringlength; //change or remove this line
}

bool CharacterArray::isEmpty() {

    ///TODO: Implement
    return true; //change or remove this line
}

char* CharacterArray::substring(int startIndex, int length) {
    char * arr2;
    arr2 = new char[arrsize];
    for(int i = 0; i <= length; i++){
        arr2[i] = arr[i];
    }
    ///TODO: Implement
    return arr2; //change or remove this line
}

ostream& operator <<(ostream& out, const CharacterArray& ca) {

    ///TODO: Implement
    out << ca.arr;
    return out; //change or remove this line
}
