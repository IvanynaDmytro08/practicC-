#include <iostream>

class Array {

    int *array;
    int size;

public:

    Array(int size){

        this->size = size;

        array  = new int [size];
    };

    ~Array(){delete[] array;};

    void setNewSize (int newSize) {
        this->size = newSize;
    }


    int getSize () {
        return size;
    }


    void inputArray () {

        std::cout << "Insert your array" << std::endl;

        for(int i = 0; i < size; i ++) {

            std::cin >> array[i];
        }

    };


    void showArray() {

        for (int i = 0; i < size; i++) {

            std::cout << array[i] << ' ';

        }

        std::cout << std::endl;
    };


    int findMaxArray(){

        int maxNum = array[0];

        for (int i = 1; i < size; i++) {

            if (maxNum < array[i])
                maxNum = array[i];

        }
        return maxNum;
    };


    int findMinArray(){

        int minNum = array[0];

        for (int i = 1; i < size; i++) {

            if (minNum > array[i])
                minNum = array[i];

        }
        return  minNum;
    };


    void sortArray()
    {

        int buf;


        for(int j = 1 ; j < size; j++)
        {
            for(int i = 0; i < size - j; i++)
            {
                if(array[i] > array[i + 1])
                {
                    buf = array[i];
                    array[i] = array[i+1];
                    array[i+1] = buf;
                }
            }
        }

    };

};


int main () {

    int size;
    int newSize;


    do {
        std::cout << "Input size your array - ";
        std:: cin >> size;

        if (size <= 0)
            std::cout << "You have wrong " << std::endl;

    } while (size <= 0);


    Array array(size);


    array.inputArray();

    std::cout << "Your array - ";
    array.showArray();
    std::cout << "Array size - " << array.getSize() << std::endl;

    std::cout << "Your min and max elements in array: " << std::endl;
    std::cout << "Min - " << array.findMinArray() << std::endl;
    std::cout << "Max - " << array.findMaxArray() << std::endl;


    std::cout << "Init array - ";
    array.showArray();

    array.sortArray();

    std::cout << "Your array after sort - ";
    array.showArray();

    std::cout << "Input new size - ";
    std::cin >> newSize;

    array.setNewSize(newSize);
    std::cout << "New size array - " << array.getSize() << std::endl;
}
