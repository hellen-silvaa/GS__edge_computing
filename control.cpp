/*
Código para controlar o motor direito e esquerdo de um mini robô aquático
usando como direção dois joysticks
*/

// definindo os pinos 
const int joyLpin = A0;     // pino do joystick esquerdo
const int joyRpin = A1;     // pino do joystick direito

const int motorLfwd = 7;    // pino de avanço do motor esq
const int motorLbck = 8;    // pino de retrocesso do motor esq
const int motorLen = 10;    // pino de ativação do motor esq

const int motorRfwd = 9;    // pino de avanço do motor dir
const int motorRbck = 12;   // pino de retrocesso do motor dir
const int motorRen = 11;    // pino de ativação do motor dir

//declarando as variáveis
int joyL;                   // leitura do joystick esqu (0-1023 do ADC)
int joyR;                   // leitura do joystick dir (0-1023 do ADC)
int joyLneutral;            // posição neutra do joystick esq
int joyRneutral;            // posição neutra do joystick dir
const int deadzone = 20;    // "zona morta" do joystick para prevenir acidentes
int motorLspeed;            // velocidade do motor esq (0-255 para PWM)
int motorRspeed;            // velocidade do motor dir (0-255 para PWM)


void setup() { 
  // definindo pinos de controle dos motores como saídas
  pinMode(motorLfwd, OUTPUT);
  pinMode(motorRfwd, OUTPUT);
  pinMode(motorLbck, OUTPUT);
  pinMode(motorRbck, OUTPUT);
  pinMode(motorLen, OUTPUT);
  pinMode(motorRen, OUTPUT);
  
  // calibrando os joysticks
  joyLneutral = analogRead(joyLpin);
  joyRneutral = analogRead(joyRpin);

  Serial.begin(9600);

}

void loop() {
  // ler joysticks
  joyL = analogRead(joyLpin);
  joyR = analogRead(joyRpin);

  Serial.print("Esquerda: ");
  Serial.print(joyL);
  
  // definindo direção e velocidade do motor esquerdo
  if ((joyL - joyLneutral) < -deadzone) { // joystick anda para frente
    digitalWrite(motorLfwd, HIGH);
    digitalWrite(motorLbck, LOW);
    motorLspeed = map(joyL, joyLneutral, 0, 0, 255);
    Serial.print(" para frente ");
  } else if ((joyL - joyLneutral) > deadzone) { // joystick dá ré
    digitalWrite(motorLfwd, LOW);
    digitalWrite(motorLbck, HIGH);
    motorLspeed = map(joyL, joyLneutral, 1023, 0, 255);
    Serial.print(" para trás ");
  } else {
    digitalWrite(motorLfwd, LOW);
    digitalWrite(motorLbck, LOW);  
    Serial.print(" parado ");    
    motorLspeed = 0; 
  }
  Serial.print(motorLspeed);

  Serial.print(" Direita: ");
  Serial.print(joyR);

  // definindo direção e velocidade do motor direito
  if ((joyR - joyRneutral) < -deadzone) { // joystick anda para frente
    digitalWrite(motorRfwd, HIGH);
    digitalWrite(motorRbck, LOW);
    motorRspeed = map(joyR, joyRneutral, 0, 0, 255);
    Serial.print(" para frente ");
  } else if ((joyR - joyRneutral) > deadzone) { // joystick da ré
    digitalWrite(motorRfwd, LOW);
    digitalWrite(motorRbck, HIGH);
    motorRspeed = map(joyR, joyRneutral, 1023, 0, 255);
    Serial.print(" para trás ");
  } else {
    digitalWrite(motorRfwd, LOW);
    digitalWrite(motorRbck, LOW);  
    Serial.print(" parado ");    
    motorRspeed = 0; 
  }
  Serial.println(motorRspeed);
  analogWrite(motorLen, motorLspeed);
  analogWrite(motorRen, motorRspeed);
  
}
