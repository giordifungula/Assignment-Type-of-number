#include <iostream>

using namespace std;

int main()
{
    int cost,noRoomsBooked; //per night price
    float discount = 0.0;
    int days; //will store days
    int salesTax;

    cout << "Please tell me the cost per room"<<endl;
    cin >> cost;
    cout << "Number of rooms" <<endl;
    cin >> noRoomsBooked;
    cout << "sales tax per room"<<endl;
    cin >> salesTax;
    cout << "No of days"<<endl;
    cin >> days;

    if(noRoomsBooked >= 10){
        discount = 0.1;
    }
    if(noRoomsBooked >= 20){
        discount = 0.2;
    }
    if(noRoomsBooked >= 30){
        discount = 0.3;
    }
    if(days > 3){
        discount += 0.5;
    }
    cout << "The total cost for one room is "<< cost <<endl;
    cout << "The discount per room is "<< discount <<endl;
    cout << "The number of rooms booked is "<<endl;
    cin >> noRoomsBooked;;
    float total = (cost*noRoomsBooked)*discount;
    cout << "The total cost of the rooms are : R"<< total <<endl;


}
