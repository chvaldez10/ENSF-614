//  ENSF 614 fall 2023 Lab 4 - Exercise B
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

const int vector_size = 6;

using namespace std;

struct City {
    double x, y;
    char name[30];
};

void write_binary_file(City cities[], int vector_size, char* filename);
/* PROMISES: attaches an ofstream object to a binary file named "filename" and
 * writes the content of the array cities into the file.
 */

void print_from_binary(char* filename);
/* PROMISES: uses ifstream library object to open the binary file named
 * "filename", reads the content of the file which are objects of struct City
 * (one record at a time), and displays them on the screen. It also saves the records
 * into a text-file that its name must be the filename argument, but with the extension
 * of .txt
 */


int main() {
    char streamname[] = "cities.bin";

    City cities[vector_size] = { {100, 50, "Calgary"},
        {100, 150, "Edmonton"},
        {50, 50, "Vancouver"},
        {200, 50, "Regina"},
        {500, 50, "Toronto"},
        {200, 50, "Montreal"} };

    write_binary_file(cities, vector_size, streamname);
    cout << "\nThe content of the binary file is:" << endl;
    print_from_binary(streamname);

    return 0;
}

void write_binary_file(City cities[], int vector_size, char* filename) {
    ofstream stream(filename, ios::out | ios::binary);
    if (stream.fail()) {
        cerr << "failed to open file: " << filename << endl;
        exit(1);
    }

    for (int i = 0; i < vector_size; i++) {
        stream.write((char*)&cities[i], sizeof(City));
    }

    stream.close();
}

/* PROMISES: uses ifstream library object to open the binary file named
 * "filename", reads the content of the file which are objects of struct City
 * (one record at a time), and displays them on the screen. It also saves the records
 * into a text-file that its name must be the filename argument, but with the extension
 * of .txt
 */


void print_from_binary(char* filename) {
    string file_base_name(filename);
    string txt_name = file_base_name.substr(0, file_base_name.rfind('.')) + ".txt";
    
    ifstream stream(filename, ios::in | ios::binary);
    ofstream stream_txt(txt_name);
    
    int counter = 0;
    City city;

    if (!stream) {
        cerr << "failed to open the file: " << filename << endl;
        exit(1);
    }

    if (!stream_txt) {
        cerr << "Failed to create the file: " << txt_name << endl;
        exit(1); // Consider throwing an exception instead
    }

    while (counter < vector_size) {
        stream.read((char*)(&city), sizeof(City));

        if (stream.eof()) {
            break;
        }

        if (!stream) {
            cerr << "failed to read from input file" << endl;
            exit(1);
        }

        cout << "Name: " << city.name << ", x coordinate: " << city.x <<
            ", y coordinate: " << city.y << endl;

        stream_txt << "Name: " << city.name << ", x coordinate: " << city.x <<
            ", y coordinate: " << city.y << endl;

        counter++;
    }

    stream_txt.close();
    stream.close();
}
