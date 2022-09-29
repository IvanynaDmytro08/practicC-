#include <iostream>

class Array {

    int *array;
    int size;

public:


    Array(){

        std::cout << "Input size " << std::endl;
        std::cin >> size;

        array  = new int [size];
    };

    ~Array(){delete[] array;};

    void input () {

        std::cout << "Insert your array" << std::endl;

        for(int i = 0; i < size; i ++) {

            std::cin >> array[i];
        }

    };


    void show() {

        for (int i = 0; i < size; i++) {

            std::cout << array[i] << ' ';

        }

        std::cout << std::endl;
    };


void showm(int min, int max){
    for (int i = 0; i < size; i++) {

        if (min > array[i] ) {
            min = array[i];
        }
        if (max < array[i]){
            max = array[i];
        }
    }
    std::cout << "Min - " << min << std::endl;
    std::cout << "Max - " << max << std::endl;
}



    void sort()
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



};


int main () {




    Array j;

        j.input();

        std::cout << "Your array - ";
        j.show();
        std::cout << "Your min and max elements in array: " << std::endl;
        j.showm(100,0);

        j.sort();
        std::cout << "Your array after sort - ";
        j.show();


}