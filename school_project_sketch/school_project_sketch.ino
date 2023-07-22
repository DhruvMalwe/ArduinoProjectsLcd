// #include <Wire.h> 
// #include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

// void setup()
// {
//   lcd.init();                      // initialize the lcd 
//   lcd.backlight();
//   lcd.setCursor(3,0);
//   lcd.print("Hello, world!");

// }


// void loop()
// {
//   lcd.clear();
//   lcd.setCursor(3,0);

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Address may vary based on your LCD module

uint8_t SmileyFaceChar[] = {0x00, 0x00, 0x0a, 0x00, 0x1f, 0x11, 0x0e, 0x00};

double latitude = 20.5937;   // Latitude of India
double longitude = 78.9629;  // Longitude of India
double area = 3287240;       // Area of India in square kilometers
double population = 140000000; // Population of India (Approximately 140 crore)
double length = 3214.0;      // Length of India in kilometers
double breadth = 2933.0;     // Breadth of India in kilometers

void setup() {
  lcd.init();          // initialize the lcd 
  lcd.backlight();
   // Show "Social Project by Dhruv" for 2 seconds before starting to display India's information
  
}

void loop() {
  displayDhruvdetails();
  displayIndiadetails();
  displayLatitude();     // Display latitude information on LCD
  displayLongitude();    // Display longitude information on LCD
  displayArea();         // Display area information on LCD
  displayPopulation();   // Display population information on LCD
  displayLength();       // Display length information on LCD
  displayBreadth();

  
        // Display breadth information on LCD
}
void displayIndiadetails()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("India-Size");
  lcd.setCursor(0, 1);
  lcd.print("and Location");
  delay(2000);
}
void displayDhruvdetails()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Social Project");
  lcd.setCursor(0, 1);
  lcd.print("by Dhruv");
  delay(2000);
}

// Function to display latitude information on the LCD
void displayLatitude() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Latitude: " + String(latitude, 4));
  delay(3000);
}

// Function to display longitude information on the LCD
void displayLongitude() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Longitude: " + String(longitude, 4));
  delay(3000);
}

// Function to display area information on the LCD
void displayArea() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Area: " + String(area));
  lcd.setCursor(0, 1);
  lcd.print("sq.km");
  delay(3000);
}

// Function to display population information on the LCD
void displayPopulation() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Population:");
  lcd.setCursor(0, 1);
  lcd.print("140 cr");
  delay(3000);
}

// Function to display length information on the LCD
void displayLength() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Length: " + String(length));
  lcd.setCursor(0,1);
  lcd.print("km");
  delay(3000);
}

// Function to display breadth information on the LCD
void displayBreadth() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Breadth: " + String(breadth));
  lcd.setCursor(0,1);
  lcd.print("km");
  delay(3000);
}
