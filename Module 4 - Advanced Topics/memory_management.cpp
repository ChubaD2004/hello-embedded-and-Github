#include <iostream>

struct SensorData
{
    float temperature;
    float humidity;
    int pressure;
};

int main() {

    // ----------------------------------------------------------------

    std::cout << "Block 1" << std::endl;

    SensorData stack_data;
    std::cout << "Adrress stack_data - " << &stack_data << std::endl;
    
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    SensorData *heap_ptr = new SensorData;
    std::cout << "Address on Heap (stored in heap_ptr): " << heap_ptr << std::endl;

    heap_ptr->pressure = 1132;
    std::cout << "Value heap_ptr(pressure) - " << heap_ptr->pressure << std::endl;

    delete heap_ptr;
    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

    int size;

    std::cout << "How many sensor readings do you want to store? ";
    std::cin >> size;

    SensorData* sensor_array = new SensorData[size];

    for (int i = 0; i < size; i++)
    {
        sensor_array[i].temperature = 20.0f + i*2;
        sensor_array[i].humidity = 60.0f + i*2;
        sensor_array[i].pressure = 1000 + i*2;

        std::cout << "--- Reading " << i + 1 << " ---" << std::endl;
        std::cout << "Temperature: " << sensor_array[i].temperature << std::endl;
        std::cout << "Humidity: " << sensor_array[i].humidity << std::endl;
        std::cout << "Pressure: " << sensor_array[i].pressure << std::endl;
    }    
      
    delete[] sensor_array;       
    
    // ----------------------------------------------------------------
    
    return 0;
}