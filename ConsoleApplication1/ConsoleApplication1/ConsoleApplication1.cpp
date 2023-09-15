#include <iostream>
using namespace std;

class Phone {
public:
    double length = 16.4;
    int width = 7;
    int BatteryPercentage = 70;
    string PhoneColor = "Black";
    string Brand = "OnePlus";
    string AlarmLoudness = "Loud";

    void Call() {
        cout << "Phone started ringing.\n";
    }
    void ChargeNeeded() {
        cout << "Battery is running low.\n";
    }
    void StartingCharging() {
		cout << "You put your phone on charge.\n";
    }
    void Notification() {
        cout << "Someone sent you a message in Telegram.\n";
    }
    void Alarm() {
        cout << "You are setting the alarm on 8 a.m.\n";
    }
};

class Laptop {
public:
    double ScreenSize = 15.6;
    int BatteryPercentage = 50;
    int NumberOfUsbPorts = 3;
    string LaptopColor = "Silver";
    string Brand = "Dell";

    void PowerOn() {
        cout << "Laptop is booting up.\n";
    }
    void SleepMode() {
        cout << "Laptop is entering sleep mode.\n";
    }
    void Shutdown() {
        cout << "Laptop is shutting down.\n";
    }
    void OpenBrowser() {
        cout << "Opening a web browser.\n";
    }
    void PlayMusic() {
        cout << "Playing your favorite music.\n";
    }
};

class Car {
public:
    double FuelEfficiency = 30.5;
    int year = 2022;
    int CurrentSpeed = 0;
    string model = "Toyota Camry";
    string color = "Blue";

    void StartEngine() {
        cout << "Starting the car engine.\n";
    }
    void Accelerate() {
        cout << "Car is accelerating.\n";
    }
    void Brake() {
        cout << "Applying brakes.\n";
    }
    void TurnLeft() {
        cout << "Turning left.\n";
    }
    void TurnRight() {
        cout << "Turning right.\n";
    }
};

class TV {
public:
    double ScreenSize = 55.0;
    int TvWidth = 2;
    int VolumeLevel = 20;
    string TvColor = "Black";
    string Brand = "Samsung";
    
    void TurnOn() {
        cout << "Turning on the TV.\n";
    }
    void TurnOff() {
        cout << "Turning off the TV.\n";
    }
    void ChangeChannel() {
        cout << "Changing TV channel.\n";
    }
    void AdjustVolume() {
        cout << "Adjusting the TV volume.\n";
    }
    void ConnectToInternet() {
        cout << "Connecting the TV to the internet.\n";
    }
};

class Smartwatch {
public:
    double ScreenSize = 1.2;
    int BatteryPercentage = 20;
    int ModelYear = 2022;
    string Color = "Silver";
    string Brand = "Apple Watch"; 

    void DisplayTime() {
        cout << "Displaying the current time.\n";
    }
    void TrackHeartRate() {
        cout << "Tracking your heart rate.\n";
    }
    void ReceiveNotifications() {
        cout << "Receiving notifications from your smartphone.\n";
    }
    void StartWorkout() {
        cout << "Starting a workout session.\n";
    }
    void SleepTracking() {
        cout << "Tracking your sleep patterns.\n";
    }
};

int main() {
    Phone p;
    Laptop l;
    Car c;
    TV t;
    Smartwatch s;
    
    p.Alarm = "Its 8 a.m. time to wake up!";
    l.OpenBrowser = "You've opened browser on your laptor!";
    c.StartEngine = "You've started you car's engine!";
    t.ConnectToInternet = "You've connected your TV to the internet!";
    s.TrackHeartRate = "You've started tracking your heart rate!";
}