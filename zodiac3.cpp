#include <iostream>
#include <string>

 int main() {
    std::cout << "Enter the date and month of birth to find out your zodiac sign!\n";
    
    try {
    int month, day;
std::cout << "Enter your birth month (1-12): ";
std::cin >> month;
std::cout << "Enter your birth day (1-31): ";
std::cin >> day;

if (month < 1 || month > 12 || day < 1 || day > 31) {
std::cout << "Invalid date! Month must be 1-12 and day must be 1-31.\n";
return 1;

    std::string sign = "Zodiac";
if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
sign = "Aquarius";}
else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
sign = "Pisces";}
else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
sign = "Aries";}
else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
sign = "Taurus";}
else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
sign = "Gemini";}
else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
sign = "Cancer";}
else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
sign = "Leo";}
else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
sign = "Virgo";}
else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
sign = "Libra";}
else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
sign = "Scorpio";}
 else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
sign = "Sagittarius";} 
else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
sign = "Capricorn";}

std::cout << "Your zodiac sign is: " << sign << std::endl;

} catch (std::invalid_argument) {
std::cout << "Invalid input! Please enter numbers only.\n";
    }
}
return 0;