#include <iostream>
using namespace std;

// Node for storing key-value pairs
class Node {
public:
    int key;
    int value;
    Node* next;

    Node(int k, int v) {
        key = k;
        value = v;
        next = nullptr;
    }
};

class HashTable {
private:
    static const int SIZE = 10;
    Node* table[SIZE];

    // Hash function to calculate index
    int hashFunction(int key) {
        return key % SIZE;
    }

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = nullptr;
    }

    // Insert key-value pair
    void insert(int key, int value) {
        int index = hashFunction(key);
        Node* newNode = new Node(key, value);

        if (table[index] == nullptr) {
            table[index] = newNode;
        } else {
            // Collision - Use chaining
            Node* temp = table[index];
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted (" << key << ", " << value << ") at index " << index << endl;
    }

    // Search for a key
    int search(int key) {
        int index = hashFunction(key);
        Node* temp = table[index];

        while (temp != nullptr) {
            if (temp->key == key) {
                return temp->value;
            }
            temp = temp->next;
        }
        cout << "Key " << key << " not found." << endl;
        return -1;
    }

    // Display hash table
    void display() {
        for (int i = 0; i < SIZE; i++) {
            cout << "Index " << i << ": ";
            Node* temp = table[i];
            while (temp != nullptr) {
                cout << "(" << temp->key << ", " << temp->value << ") -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    ~HashTable() {
        for (int i = 0; i < SIZE; i++) {
            Node* temp = table[i];
            while (temp != nullptr) {
                Node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(10, 100);
    ht.insert(20, 200);
    ht.insert(30, 300);
    ht.insert(42, 420); // Collision example
    ht.insert(52, 520); // Collision example

    cout << "\nHash Table:" << endl;
    ht.display();

    cout << "\nSearching for key 30: Value = " << ht.search(30) << endl;
    cout << "Searching for key 25: Value = " << ht.search(25) << endl;

    return 0;
}