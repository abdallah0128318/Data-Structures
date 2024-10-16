#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include <iostream>
using std::cout;
using std::endl; 
using std::out_of_range;
using std::invalid_argument;
using std::cerr;


class DynamicArray {
    private:
        int* arr;
        int capacity = 0;
        int length = 0;
    public:

    DynamicArray(int capacity) {
        try {
            if (capacity <= 0) {
                throw invalid_argument("Capacity must be greater than 0");
            }
            arr = new int[capacity];
            this->capacity = capacity;
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    int get(int i) {
        try
        {
            if (i < 0 || i >= capacity) {
                throw out_of_range("Index out of bounds");
            }
            return arr[i];
        }
        catch(const out_of_range& e)
        {
            std::cerr << e.what() << '\n';
            return -1;
        }
    }

    void set(int i, int n) {
        try
        {
             if (i < 0 || i >= capacity) {
                throw out_of_range("Index out of bounds");
            }
            arr[i] = n;
        }
        catch(const out_of_range& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    void pushback(int n) {
        if (length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        try{
            if (length <= 0){
                throw out_of_range("Array is Empty");
            }
            int n = arr[length - 1];
            length--;
            return n;
        } catch (const out_of_range& e) {
            cerr << "Error: " << e.what() << endl;
            // Return an error value if the error occurs as the function have to retuen an integer
            return -1; 
        }
    }

    void resize() {
        this->capacity = 2 * capacity;
        int* newArr = new int[this->capacity];
        for (int i = 0; i < length; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        newArr = nullptr;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};


#endif