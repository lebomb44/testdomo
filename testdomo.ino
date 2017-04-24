#define UP0_PIN       11
#define DOWN0_PIN     12
#define SHUTTER0_PIN  9
#define WINDOW0_PIN   10

#define UP1_PIN       A2
#define DOWN1_PIN     A3
#define SHUTTER1_PIN  A0
#define WINDOW1_PIN   A1

#define UP2_PIN       7
#define DOWN2_PIN     8
#define SHUTTER2_PIN  A4
#define WINDOW2_PIN   A5

#define LIGHT_PIN     13
#define TEMP_PIN      2

#define SHUTTER0_RELAY_UP_PIN   6
#define SHUTTER0_RELAY_DOWN_PIN 5

#define LIGHT_CORIDOR_PIN       4

#define SHUTTER1_RELAY_UP_PIN   4
#define SHUTTER1_RELAY_DOWN_PIN 3

#define RELAY4_PIN 7
#define RELAY3_PIN 6
#define RELAY2_PIN 5
#define RELAY1_PIN 4
#define RELAY0_PIN 3

#define CORRIDOR_MOVE0 11
#define CORRIDOR_MOVE1 12
#define LOUNGE_MOVE0 9
#define LOUNGE_MOVE1 10
#define ENTRY_MOVE0 A0
#define ENTRY_MOVE1 A1
#define SPARE_MOVE0 A2
#define SPARE_MOVE1 A3

void setup() {
  Serial.begin(115200);

  pinMode(UP0_PIN, INPUT);
  pinMode(DOWN0_PIN, INPUT);
  pinMode(SHUTTER0_PIN, INPUT);
  pinMode(WINDOW0_PIN, INPUT);

  pinMode(UP1_PIN, INPUT);
  pinMode(DOWN1_PIN, INPUT);
  pinMode(SHUTTER1_PIN, INPUT);
  pinMode(WINDOW1_PIN, INPUT);

  pinMode(UP2_PIN, INPUT);
  pinMode(DOWN2_PIN, INPUT);
  pinMode(SHUTTER2_PIN, INPUT);
  pinMode(WINDOW2_PIN, INPUT);

  pinMode(LIGHT_PIN, OUTPUT);
  digitalWrite(LIGHT_PIN, LOW);
  pinMode(TEMP_PIN, OUTPUT);
  digitalWrite(TEMP_PIN, LOW);

  pinMode(SHUTTER0_RELAY_UP_PIN, OUTPUT);
  digitalWrite(SHUTTER0_RELAY_UP_PIN, LOW);
  pinMode(SHUTTER0_RELAY_DOWN_PIN, OUTPUT);
  digitalWrite(SHUTTER0_RELAY_DOWN_PIN, LOW);

  pinMode(LIGHT_CORIDOR_PIN, OUTPUT);
  digitalWrite(LIGHT_CORIDOR_PIN, LOW);

  pinMode(SHUTTER1_RELAY_UP_PIN, OUTPUT);
  digitalWrite(SHUTTER1_RELAY_UP_PIN, LOW);
  pinMode(SHUTTER1_RELAY_DOWN_PIN, OUTPUT);
  digitalWrite(SHUTTER1_RELAY_DOWN_PIN, LOW);

  pinMode(RELAY0_PIN, OUTPUT);
  digitalWrite(RELAY0_PIN, LOW);
  pinMode(RELAY1_PIN, OUTPUT);
  digitalWrite(RELAY1_PIN, LOW);
  pinMode(RELAY2_PIN, OUTPUT);
  digitalWrite(RELAY2_PIN, LOW);
  pinMode(RELAY3_PIN, OUTPUT);
  digitalWrite(RELAY3_PIN, LOW);
  pinMode(RELAY4_PIN, OUTPUT);
  digitalWrite(RELAY4_PIN, LOW);

  pinMode(CORRIDOR_MOVE0, INPUT);
  pinMode(CORRIDOR_MOVE1, INPUT);
  pinMode(LOUNGE_MOVE0, INPUT);
  pinMode(LOUNGE_MOVE1, INPUT);
  pinMode(ENTRY_MOVE0, INPUT);
  pinMode(ENTRY_MOVE1, INPUT);
  pinMode(SPARE_MOVE0, INPUT);
  pinMode(SPARE_MOVE1, INPUT);
}

void loop() {
  Serial.println("-----------------------------------------");

  Serial.print("UP0(orange): "); Serial.print(digitalRead(UP0_PIN));
  Serial.print(", DOWN0(w.orange): "); Serial.print(digitalRead(DOWN0_PIN));
  Serial.print(", SHUTTER0(w.blue): "); Serial.print(digitalRead(SHUTTER0_PIN));
  Serial.print(", WINDOW0(blue): "); Serial.println(digitalRead(WINDOW0_PIN));

  Serial.print("UP1(orange): "); Serial.print(digitalRead(UP1_PIN));
  Serial.print(", DOWN1(w.orange): "); Serial.print(digitalRead(DOWN1_PIN));
  Serial.print(", SHUTTER1(w.blue): "); Serial.print(digitalRead(SHUTTER1_PIN));
  Serial.print(", WINDOW1(blue): "); Serial.println(digitalRead(WINDOW1_PIN));

  Serial.print("UP2(orange): "); Serial.print(digitalRead(UP2_PIN));
  Serial.print(", DOWN2(w.orange): "); Serial.print(digitalRead(DOWN2_PIN));
  Serial.print(", SHUTTER2(w.blue): "); Serial.print(digitalRead(SHUTTER2_PIN));
  Serial.print(", WINDOW2(blue): "); Serial.println(digitalRead(WINDOW2_PIN));

//  digitalWrite(LIGHT_PIN, HIGH);
//  digitalWrite(TEMP_PIN, HIGH);
//  digitalWrite(LIGHT_PIN, LOW); delay(1000); digitalWrite(LIGHT_PIN, HIGH);
//  digitalWrite(TEMP_PIN, LOW); delay(1000); digitalWrite(TEMP_PIN, HIGH);
//  digitalWrite(SHUTTER0_RELAY_UP_PIN, LOW); delay(1000); digitalWrite(SHUTTER0_RELAY_UP_PIN, HIGH);
//  digitalWrite(SHUTTER0_RELAY_DOWN_PIN, LOW); delay(1000); digitalWrite(SHUTTER0_RELAY_DOWN_PIN, HIGH);
//  digitalWrite(SHUTTER0_RELAY_UP_PIN, LOW); digitalWrite(SHUTTER0_RELAY_DOWN_PIN, LOW); delay(1000); digitalWrite(SHUTTER0_RELAY_UP_PIN, HIGH); digitalWrite(SHUTTER0_RELAY_DOWN_PIN, HIGH);
//  digitalWrite(LIGHT_CORIDOR_PIN, LOW); delay(1000); digitalWrite(LIGHT_CORIDOR_PIN, HIGH);
//  digitalWrite(SHUTTER1_RELAY_UP_PIN, LOW); delay(1000); digitalWrite(SHUTTER1_RELAY_UP_PIN, HIGH);
//  digitalWrite(SHUTTER1_RELAY_DOWN_PIN, LOW); delay(1000); digitalWrite(SHUTTER1_RELAY_DOWN_PIN, HIGH);
//  digitalWrite(SHUTTER1_RELAY_UP_PIN, LOW); digitalWrite(SHUTTER1_RELAY_DOWN_PIN, LOW); delay(1000); digitalWrite(SHUTTER1_RELAY_UP_PIN, HIGH); digitalWrite(SHUTTER1_RELAY_DOWN_PIN, HIGH);

//  digitalWrite(RELAY0_PIN, LOW); delay(1000); digitalWrite(RELAY0_PIN, HIGH);
//  digitalWrite(RELAY1_PIN, LOW); delay(1000); digitalWrite(RELAY1_PIN, HIGH);
//  digitalWrite(RELAY2_PIN, LOW); delay(1000); digitalWrite(RELAY2_PIN, HIGH);
//  digitalWrite(RELAY3_PIN, LOW); delay(1000); digitalWrite(RELAY3_PIN, HIGH);
//  digitalWrite(RELAY4_PIN, LOW); delay(1000); digitalWrite(RELAY4_PIN, HIGH);

  Serial.print("CORRIDOR 0: "); Serial.print(digitalRead(CORRIDOR_MOVE0));
  Serial.print(", CORRIDOR 1: "); Serial.println(digitalRead(CORRIDOR_MOVE1));
  Serial.print("LOUNGE 0: "); Serial.print(digitalRead(LOUNGE_MOVE0));
  Serial.print(", LOUNGE 1: "); Serial.println(digitalRead(LOUNGE_MOVE1));
  Serial.print("ENTRY 0: "); Serial.print(digitalRead(ENTRY_MOVE0));
  Serial.print(", ENTRY 1: "); Serial.println(digitalRead(ENTRY_MOVE1));
  Serial.print("SPARE 0: "); Serial.print(digitalRead(SPARE_MOVE0));
  Serial.print(", SPARE 1: "); Serial.println(digitalRead(SPARE_MOVE1));

  delay(1000);
}

