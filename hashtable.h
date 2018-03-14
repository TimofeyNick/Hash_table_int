#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <math.h>

class HashTable{
public:

    HashTable(int size);
    ~HashTable();

    int size_;
    std::vector <std::list<int>> table_;

    void insert_number(int num);
    void print_table();

    bool in_table(int num);
//    void delete_number(int num);
//    int find_number(int num);

private:

    int pi = 314159;
    std::list<int>& get_list(int num);
    unsigned int hash(int num);
    bool in_list(std::list<int> ls, int num);
};

#endif // HASHTABLE_H
