#include <hashtable.h>
using namespace std;
#include <list>

HashTable::HashTable(int size){
    size_ = size;
    table_.resize(size);
}

HashTable::~HashTable(){}

void HashTable::insert_number(int num){
    auto& cur_list = get_list(num);
    cur_list.push_front(num);
}

std::list<int>& HashTable::get_list(int num)
{
    unsigned int result = hash(num) % size_;
    return table_[result];
}

unsigned int HashTable::hash(int num)
{
   num >= 0 ? num = num : num =- num;
   int value = 0;
   value = pi * num;
   //std::cout << "hash_value = "<< value << std::endl;
   return value;
}

bool HashTable::in_list(std::list<int> ls, int num)
{
    for(auto it =ls.begin(); it!=  ls.end(); it++){
        if(*it == num){
            return true;
        }
    }

    return false;
}

bool HashTable::in_table(int num)
{
    auto& ls = get_list(num);

    if (in_list(ls, num))
        return true;

    return false;
}

void HashTable::print_table()
{
    int p = 0;
    for(vector<list<int>>::iterator ls = table_.begin(); ls != table_.end(); ls++){
        std::cout << "--------------------------"<< std::endl;
        std::cout << "hash_value = "<< p << std::endl;
        p = p + 1;
        for(list<int>::iterator j = (*ls).begin(); j != (*ls).end(); j++){
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }
}

//void HashTable::delete_number(int num){
//    std:: cout << "Yeah!" << std::endl;
//}

//int HashTable::find_number(int num){
//    return 5;
//}


