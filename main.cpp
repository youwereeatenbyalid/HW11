
#include<list>
#include"algorithms.cpp"
/*
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
    data temp = *iterator_front;
    *iterator_front = *iterator_smallest;
    *iterator_smallest = temp;
    iterator_front++;
    }
}
*/
int main(int argc, char **argv) {

    std::list<int> myList = {5,1,2,9,3,19,23,4};
    int myArray[9] = {0,5,1,2,9,3,19,23,4};

    selectionsort(myList);


    std::cout << std::endl;
    bubblesort(myArray,9);


return 0;
}
