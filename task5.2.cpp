#include <iostream>


void converter(double km)
{

    std::cout << "Enter the distance in miles  " << km * 0.621 << "\n"; ;
}


void main()
{
    double km;
    std::cout << "Enter the distance in kilometers ";
    std::cin >> km;
    std::cout << "\n";
    converter(km);
    std::cout << "\n";
    system("pause");

} 