#include <iostream>

struct SensorData
{
    float temperature;
    float humidity;
    int pressure;
};

void printSensorData(SensorData data) {
    std::cout << "Temperature = " << data.temperature << std::endl;
    std::cout << "Humidity = " << data.humidity << std::endl;
    std::cout << "Pressure = " << data.pressure << std::endl;}

int main() {

    // ----------------------------------------------------------------

    std::cout << "Block 1" << std::endl;

    SensorData current_reading;

    current_reading.temperature = 25.5f; 
    current_reading.humidity = 60.2f;
    current_reading.pressure = 1013;

    std::cout << "Temperature = " << current_reading.temperature << std::endl;
    std::cout << "Humidity = " << current_reading.humidity << std::endl;
    std::cout << "Pressure = " << current_reading.pressure << std::endl;
    
    // ----------------------------------------------------------------

    std::cout << "Block 2" << std::endl;

    printSensorData(current_reading);
    
    // ----------------------------------------------------------------

    std::cout << "Block 3" << std::endl;

      
    SensorData *ptr_reading = &current_reading;

    std::cout << "Temperature (via pointer): " << ptr_reading->temperature << std::endl;
    
    ptr_reading->pressure = 1025;
    std::cout << "New pressure = " << current_reading.pressure << std::endl;

    // ----------------------------------------------------------------
    
    return 0;
}