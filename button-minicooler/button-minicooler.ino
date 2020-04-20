/*
 * O mini-cooler liga enquanto o botao estiver pressionado.
 * 
 * O Circuito:
 *  Mini-cooler conectado ao pino 13 e ao terra
 *  Botao conectado ao pino 2 desde 5V
 *  Resistor de 10K conectado ao pino 2 desde o terra
*/

// constantes nao sao alteradas.
// Sao usadas aqui para definir os numeros dos pinos:
const int buttonPin = 2;     // o numero do pino do botão
const int miniCoolerPin =  13;      // o numero do pino do miniCooler

// variaveis que devem mudar:
int buttonState = 0;         // variavel para ler o estado do botao

void setup() {
  // inicializa o pino do miniCooler como saida:
  pinMode(miniCoolerPin, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin, INPUT);   
}

void loop(){
  // faz a leitura do valor do botao:
  buttonState = digitalRead(buttonPin);

  // verifica se o botao esta pressionado.
  // em caso positivo, buttonState e HIGH:
  if (buttonState == HIGH) {   
    // liga o miniCooler:   
    digitalWrite(miniCoolerPin, HIGH); 
  }
  else {
    // desliga o miniCooler:
    digitalWrite(miniCoolerPin, LOW);
  }
}
