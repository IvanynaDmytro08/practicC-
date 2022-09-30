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



    void findMaxArray(){

        int maxNum = array[0];

        for (int i = 1; i < size; i++) {

            if (maxNum < array[i])
                maxNum = array[i];

        }
        std::cout << "Max - " << maxNum << std::endl;

    };



    void findMinArray(){

        int minNum = array[0];

        for (int i = 1; i < size; i++) {

            if (minNum > array[i])
                minNum = array[i];

        }
        std::cout << "Min - " << minNum << std::endl;


    };



    void sortArray()
    {

         int buf;

        for(int j = 1 ; j < size; j++)
        {
            for(int i = 0; i < size-j; i++)
            {
                if(array[i] > array[i+1])
                {
                    buf = array[i];
                    array[i] = array[i+1];
                    array[i+1] = buf;
                }
            }
        }

    };


    void newSizeArray(int newSize){


        for (int i = 0; i < newSize; i++) {

            std::cout << array[i] << ' ';
        }
        std::cout << std::endl;

    }


};


int main () {

    int size;
    int newSize;

    std::cout << "Input size " << std::endl;
    std::cin >> size;

    Array array(size);

    array.inputArray();

    std::cout << "Your array - ";
    array.showArray();

    std::cout << "Your min and max elements in array: " << std::endl;
    array.findMaxArray();
    array.findMinArray();

    array.sortArray();

    std::cout << "Your array after sort - ";
    array.showArray();

    std::cout << "Input new size " << std::endl;
    std::cin >> newSize;

    array.newSizeArray(newSize);

}