#include <iostream>

int findMax(int *arr, int size){
    int max_val = *arr;

    for (int i = 0; i < size; i++)
    {
        if (max_val < arr[i])
            max_val = arr[i];        
    }  
    
    return max_val;
}

int main() {

    // ----------------------------------------------------------------
    std::cout << "Block 1" << std::endl;

    int var = 10; 

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var (&var): " << &var << std::endl;
    
    int *ptr = &var;      

    std::cout << "Value stored in ptr (the address): " << ptr << std::endl;
    std::cout << "Value AT the address ptr points to (*ptr): " << *ptr << std::endl;
    
    std::cout << "\n--- Modifying data via pointer ---" << std::endl;

    *ptr = 25; 

    std::cout << "New value of var: " << var << std::endl;  
    std::cout << "New value of ptr: " << *ptr << std::endl;  

    
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    int sensor_data_1[] = {10, 45, 23, 8, 92, 12};
    int sensor_data_2[] = {-5, -2, -10, -1};

    int size1 = sizeof(sensor_data_1) / sizeof(int);
    int size2 = sizeof(sensor_data_2) / sizeof(int);

    std::cout << "Max value in first array is: " << findMax(sensor_data_1, size1) << std::endl;
    std::cout << "Max value in second array is: " << findMax(sensor_data_2, size2) << std::endl;
    
    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    std::cout << "\n--- Pointers and Arrays ---" << std::endl;

    int arr[3] = {100, 200, 300};
    int *arr_ptr = arr;

    std::cout << "Value of arr[0]: " << arr[0] << std::endl;
    std::cout << "Value at *arr_ptr: " << *arr_ptr << std::endl;


    arr_ptr++; 

    std::cout << "Value at *arr_ptr after increment: " << *arr_ptr << std::endl;
    
    arr_ptr--;

    std::cout << "Value at *arr_ptr after reduction: " << *arr_ptr << std::endl;

    // ----------------------------------------------------------------

    return 0;
}