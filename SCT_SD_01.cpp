#include<iostream>
using namespace std;

void celsiusConversions(float c){
    float f = (c * 9.0 / 5.0) + 32;
    float k = c + 273.15;

    cout<<"Celsius to Fahrenheit : "<<f<<" F"<<endl;
    cout<<"Celsius to Kelvin : "<<k<<" K"<<endl;
}

void fahrenheitConversions(float f){
    float c = (f-32) * 5.0/9.0;
    float k = c + 273.15;
    cout<<"Celsius to Fahrenheit : "<<c<<" C"<<endl;
    cout<<"Celsius to Kelvin : "<<k<<" K"<<endl;
    
}

void kelvinConversions(float k){

    float c = k - 273.15;
    float f = (c * 9.0 / 5.0) + 32;
    cout<<"Celsius to Fahrenheit : "<<c<<" C"<<endl;
    cout<<"Celsius to Kelvin : "<<f<<" F"<<endl;
}


int main(){
    int choice;
    float temp;

    cout<<"Temperature Converter:\n";
    cout<<"1. From Celcuis"<<endl;
    cout<<"2. From Fahrenheit"<<endl;
    cout<<"3. From Kelvin"<<endl;

    cout<<"Enter your choice (1-3)"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Enter the temperature in Celsius : ";
        cin>>temp;
        celsiusConversions(temp);
        break;

        case 2:
        cout<<"Enter the temperature in Fahrenheit : ";
        cin>>temp;
        fahrenheitConversions(temp);
        break;

        case 3:
        cout<<"Enter the temperature in Kelvin : ";
        cin>>temp;
        kelvinConversions(temp);
        break;

        default:
        cout<<"Invalid choice!";
    }
    
    return 0;
}