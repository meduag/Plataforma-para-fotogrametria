#include <AccelStepper.h>

// Define los pines de control del motor
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

// Crea una instancia de AccelStepper
AccelStepper stepper(AccelStepper::FULL4WIRE, IN1, IN3, IN2, IN4);

void setup() {
  stepper.setMaxSpeed(2000);  // Velocidad máxima en pasos por segundo
  stepper.setSpeed(600);      // Velocidad inicial en pasos por segundo
}

void loop() {
  stepper.runSpeed();  // Avanza un paso cada vez que se llama
}
