#include <LiquidCrystal.h>

// Protótipos das funções
float lerTemperatura();
int lerPH();
void showStartupScreen();

// Define os pinos do LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define os pinos dos sensores
const int sensorTemperatura = A0;
const int sensorPH = A1;

void setup()
{
    // Inicializa o LCD com 16 colunas e 2 linhas
    lcd.begin(16, 2);

    // Apresentação inicial
    showStartupScreen(); // Chama a função para mostrar a tela de inicialização
}

void loop()
{
    // Lê os valores dos sensores
    float temperatura = lerTemperatura();
    int ph = lerPH();

    // Limpa o LCD
    lcd.clear();

    // Exibe os valores no LCD
    lcd.setCursor(0, 0);
    lcd.print("Temperatura: ");
    lcd.print(temperatura);
    lcd.print(" C");

    lcd.setCursor(0, 1);
    lcd.print("pH: ");
    lcd.print(ph);

    delay(1000); // Aguarda 1 segundo antes de atualizar novamente
}

// Função para ler a temperatura
float lerTemperatura()
{
    int valorADC = analogRead(sensorTemperatura);
    float tensao = (valorADC / 1024.0) * 5.0;    // Converte para tensão
    float temperaturaC = (tensao - 0.5) * 100.0; // Converte para graus Celsius
    return temperaturaC;
}

// Função para ler o pH
int lerPH()
{
    int valorADC = analogRead(sensorPH);
    // Conversão do valor do potenciômetro para uma faixa de pH típica de 0 a 14
    int ph = map(valorADC, 0, 1023, 0, 14);
    return ph;
}

// Função para mostrar a tela de inicialização
void showStartupScreen()
{
    lcd.clear();              // Limpa o display LCD
    lcd.setCursor(0, 0);      // Move o cursor para a primeira linha
    lcd.print("Bem-vindo a"); // Exibe o texto "Bem-vindo a"
    lcd.setCursor(0, 1);      // Move o cursor para a segunda linha
    lcd.print("LCV!");        // Exibe o texto "LCV Motors!"
    delay(2000);              // Espera 2 segundos

    for (int i = 0; i < 16; i++)
    {
        lcd.scrollDisplayLeft(); // Rola o display para a esquerda
        delay(200);              // Espera 200 milissegundos
    }

    lcd.clear();         // Limpa o display LCD
    lcd.setCursor(0, 0); // Move o cursor para a primeira linha
    lcd.print("LCV");    // Exibe o texto "LCV"
    for (int i = 0; i < 3; i++)
    {
        lcd.setCursor(4, 0); // Move o cursor para a posição 4 da primeira linha
        lcd.print(" ");      // Exibe um espaço
        delay(300);          // Espera 300 milissegundos
        lcd.setCursor(4, 0); // Move o cursor para a posição 4 da primeira linha
        lcd.print(".");      // Exibe um ponto
        delay(300);          // Espera 300 milissegundos
        lcd.setCursor(5, 0); // Move o cursor para a posição 5 da primeira linha
        lcd.print(" ");      // Exibe um espaço
        delay(300);          // Espera 300 milissegundos
        lcd.setCursor(5, 0); // Move o cursor para a posição 5 da primeira linha
        lcd.print(".");      // Exibe um ponto
        delay(300);          // Espera 300 milissegundos
        lcd.setCursor(6, 0); // Move o cursor para a posição 6 da primeira linha
        lcd.print(" ");      // Exibe um espaço
        delay(300);          // Espera 300 milissegundos
        lcd.setCursor(6, 0); // Move o cursor para a posição 6 da primeira linha
        lcd.print(".");      // Exibe um ponto
        delay(300);          // Espera 300 milissegundos
    }
    delay(1000); // Espera 1 segundo
    lcd.clear(); // Limpa o display LCD
}
