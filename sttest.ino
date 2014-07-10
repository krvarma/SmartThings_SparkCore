/* A Spark function to parse the commands */
int ledControl(String command);

// We name pin D7 as led
int led = D7; 

// This routine runs only once upon reset
void setup() 
{
  //Register Spark function
  Spark.function("ledstate", ledControl);    
  // Initialize D0 pin as an output
  pinMode(led, OUTPUT);
}

// This routine loops forever 
void loop()
{
  // Nothing to do here
}

int ledControl(String command)
{
  if (command == "1") {   
    digitalWrite(led, HIGH);   // Turn ON the LED
    return 1;
  } else {               
    digitalWrite(led, LOW);    // Turn OFF the LED
    return 0;
  }
}