#include <iostream>
#include <list>
template<typename data>
void selectionsort(std::list<data> &myList){
    typename std::list<data>::iterator iterator_front = myList.begin();

    while(iterator_front!=myList.end()){
        typename std::list<data>::iterator iterator_traverse = iterator_front;
        typename std::list<data>::iterator iterator_smallest = iterator_front;
        iterator_traverse++;
        while(iterator_traverse!=myList.end()){
            if(*iterator_traverse<*iterator_smallest) iterator_smallest = iterator_traverse;
            
            iterator_traverse++;
        }
    for(std::list<int>::iterator i = myList.begin();i!=myList.end();i++){
        std::cout << *i<< " ";
    }
    std::cout<< std::endl;
    data temp = *iterator_front;
    *iterator_front = *iterator_smallest;
    *iterator_smallest = temp;
    iterator_front++;
    }
}


template <typename data>
void bubblesort(data myarray[],int size){
    int numCompares = size-1;
    while(numCompares>0){
        int last = 1;
        for(int i = 1;i<numCompares+1;i++){
            if(myarray[i] >myarray[i+1]){
                data temp = myarray[i];
                myarray[i] = myarray[i+1];
                myarray[i+1] = temp;
                last = i;
            }
        }
        for(int i = 1; i<9;i++){
            std::cout << myarray[i]<< " ";
        }
        std::cout<< std::endl;
        numCompares = last-1;
    }
};
