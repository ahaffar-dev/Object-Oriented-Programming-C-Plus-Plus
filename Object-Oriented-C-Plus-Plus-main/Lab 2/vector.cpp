#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Prints the elements in the vector and their memory locations
 * @param v - vector of integers
 */
void printMemVec(vector<int> &v) {
    cout << "Array - Each int is worth " << sizeof(int) << " bytes\n";
    for (size_t i = 0; i < v.size(); i++) {
        cout << "Value: " << v[i] << " at Memory Location: " << &v[i] << endl;
    }
}

/**
 * @brief Increments all of the elements in v by 10
 * @param v - address to a vector of integers
 */
void incVecBy10(vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        v[i] += 10;
    }
}

int main() {
    // Create a constant integer called SIZE with value 5
    const int SIZE = 5;

    // Create a vector of integers called vec that holds 5 elements
    vector<int> vec;

    // Populate vec with values 100 to 104
    for (int i = 0; i < SIZE; i++) {
        vec.push_back(100 + i);
    }

    // Print initial values and memory locations
    cout << "Before Increment-------------\n";
    printMemVec(vec);

    // Increment all elements by 10
    incVecBy10(vec);

    // Print updated values and memory locations
    cout << "After Increment-------------\n";
    printMemVec(vec);

    // Remove the last element from vec
    vec.pop_back();

    // Print after removing the last element
    cout << "After Pop-------------\n";
    printMemVec(vec);

    // Append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);

    // Print after adding new values
    cout << "After Push-------------\n";
    printMemVec(vec);

    return 0;
}
