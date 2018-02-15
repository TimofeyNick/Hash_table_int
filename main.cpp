#include <hashtable.h>

#include <iostream>


using namespace std;

int main()
{
    int size = 10;
    //int key_1 = 0;
    //int variab = 0;
    HashTable p(size);

    p.insert_number(-8);
    p.print_table();

    //variab = p.find_number(8);

    //p.delete_number(key_1);

    std::cout << "hash table constist from hash numbers from 0 to "<< size - 1 <<std::endl;
}
