/*
 *  lab2exe_B.cpp
 *  ENSF 614 Lab 2 Exercise B
 */

int my_strlen(const char* s);
/*  Duplicates strlen from <cstring>, except return type is int.
 *  REQUIRES
 *     s points to the beginning of a string.
 *  PROMISES
 *     Returns the number of chars in the string, not including the
 *     terminating null.
 */

void my_strncat(char* dest, const char* source, int n); // added n
/*  Duplicates strncat from <cstring>, except return type is void.
 */

int my_strcmp(const char* str1, const char* str2);

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char str1[7] = "banana";
    const char str2[] = "-tacit";
    const char* str3 = "-toe";

    /* point 1 */
    char str5[] = "ticket";
    char my_string[100] = "";
    int bytes;
    int length;

    /* using strlen libarary function */
    length = my_strlen(my_string);
    cout << "\nLine 1: my_string length is " << length;

    /* using sizeof operator */
    bytes = sizeof(my_string);
    cout << "\nLine 2: my_string size is " << bytes << " bytes.";

    /* using strcpy libarary function */
    strcpy_s(my_string, str1);
    cout << "\nLine 3: my_string contains: " << my_string;

    length = my_strlen(my_string);
    cout << "\nLine 4: my_string length is " << length << ".";

    my_string[0] = '\0';
    cout << "\nLine 5: my_string contains:\"" << my_string << "\"";

    length = my_strlen(my_string);
    cout << "\nLine 6: my_string length is " << length << ".";

    bytes = sizeof(my_string);
    cout << "\nLine 7: my_string size is still " << bytes << " bytes.";

    /* strncat append the first 3 characters of str5 to the end of my_string */
    my_strncat(my_string, str5, 3);
    cout << "\nLine 8: my_string contains:\"" << my_string << "\"";

    length = my_strlen(my_string);
    cout << "\nLine 9: my_string length is " << length << ".";

    my_strncat(my_string, str2, 4);
    cout << "\nLine 10: my_string contains:\"" << my_string << "\"";

    /* strncat append ONLY up ot '\0' character from str3 -- not 6 characters */
    my_strncat(my_string, str3, 6);
    cout << "\nLine 11: my_string contains:\"" << my_string << "\"";

    length = my_strlen(my_string);
    cout << "\nLine 12; my_string has " << length << " characters.";

    cout << "\n\nUsing strcmp - C library function: ";

    cout << "\n\"ABCD\" is less than \"ABCDE\" ... my_strcmp returns: " <<
        my_strcmp("ABCD", "ABCDE");

    cout << "\n\"ABCD\" is less than \"ABND\" ... my_strcmp returns: " <<
        my_strcmp("ABCD", "ABND");

    cout << "\n\"ABCD\" is equal than \"ABCD\" ... my_strcmp returns: " <<
        my_strcmp("ABCD", "ABCD");

    cout << "\n\"ABCD\" is less than \"ABCd\" ... my_strcmp returns: " <<
        my_strcmp("ABCD", "ABCd");

    cout << "\n\"Orange\" is greater than \"Apple\" ... my_strcmp returns: " <<
        my_strcmp("Orange", "Apple") << endl;

    cout << "\n\"ab\" is equal to \"ba\" ... my_strcmp returns: " <<
        my_strcmp("AB", "BA");

    return 0;
}

int my_strlen(const char* s) {
    int counter = 0;

    while (*s != '\0') {
        counter++;
        s++;
    }

    return counter;
}

void my_strncat(char* dest, const char* source, int n) {
    if (n < 0) return;  // Return immediately if n is negative.

    while (*dest != '\0') {
        dest++;
    }

    int src_counter = 0;

    while (*source != '\0' && src_counter < n) {
        *dest = *source;
        dest++;
        source++;
        src_counter++;
    }

    *dest = '\0';
}

int my_strcmp(const char* str1, const char* str2) {
    int str1_count=0, str2_count=0;
    int str_diff;

    while (*str1 != '\0') {
        str1_count += (int)*str1;
        str1++;
    }

    while (*str2 != '\0') {
        str2_count += (int)*str2;
        str2++;
    }

    str_diff = str1_count - str2_count;

    return str_diff;
}