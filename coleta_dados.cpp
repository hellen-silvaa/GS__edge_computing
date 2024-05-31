
#include <LiquidCrystal_I2C.h>  /
#include <Wire.h>  
#include <DHT.h>  

//Define pino do sensor e tipo de sendor
#define DHTPIN 6 
#define DHTTYPE DHT22  

//Cria objeto dht
DHT dht(DHTPIN, DHTTYPE);

//Define o endereço e tipo do LCD
LiquidCrystal_I2C lcd(0x27,16,2); 

//Variável Array para criar símbolo do grau
byte grau[8] ={ B00001100,  
                B00010010,
                B00010010,
                B00001100,
                B00000000,
                B00000000,
                B00000000,
                B00000000,};

void setup()
{
    Serial.begin(9600);  //  comunicação serial 9600
    lcd.init();  // Inicializa o LCD
    lcd.backlight();  // Liga a luz do LCD

    //Cria o caractere com o símbolo do grau
    lcd.createChar(0, grau);
    dht.begin();  // Inicializa o sensor DHT
}

void loop()
{
    float p =  dht.readHumidity();  // Lê a quantidade de plástico do sensor DHT e armazena em 'p'
    float t = dht.readTemperature();  // Lê o valor da temperatura do sensor DHT e armazena em 't'
    float hic = dht.computeHeatIndex(t, p, false);  // Calcula a poluição a partir da temperatura e plástico

// Define o cursor do LCD em cada posição
    lcd.clear();  // Limpa o LCD
    lcd.setCursor(0,0);  
    lcd.print("Temp: ");  // Imprime o texto "Temp: " no LCD
    lcd.print(" "); 
    lcd.setCursor(7,0);  
    lcd.print(t,1);  // Imprime o valor da temperatura 't' com uma casa decimal no LCD
    lcd.setCursor(12,0);  

// Envia para a porta serial os textos
    Serial.print("Temperatura: ");  
    Serial.print(t); 
    Serial.println(" °C");  

    lcd.write((byte)0);  // Escreve o símbolo do grau no LCD
    lcd.print("C");  // Imprime o símbolo de grau Celsius no LCD
    lcd.setCursor(0,1);  
    lcd.print("Plast: ");  // Imprime o texto "Umid: " no LCD
    lcd.print(" ");  
    lcd.setCursor(7,1);  
    lcd.print(p,1);  // Imprime o valor da umidade 'p' com uma casa decimal no LCD
    lcd.setCursor(12,1);  
    lcd.print("%");  // Imprime o símbolo de porcentagem (%) no LCD
    Serial.print("Plástico: ");  // Envia para a porta serial o texto "Plásticoe: "
    Serial.print(p);  // Envia para a porta serial o valor da plástico 'p'
    Serial.println(" %");  // Envia para a porta serial o símbolo de porcentagem (%) e uma nova linha

    delay(4000);  


    lcd.clear();
    lcd.print("Poluicao:");
    lcd.setCursor(5,1);
    lcd.print(hic);
    lcd.print(" ");
    lcd.write((byte)0);
    lcd.print("%");
    Serial.print("Poluição: ");
    Serial.print(hic);
    Serial.println(" %");
    Serial.println(" ");
    delay(4000);
  }

