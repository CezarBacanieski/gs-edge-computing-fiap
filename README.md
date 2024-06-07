### LCV Motors - Monitoramento de Temperatura e pH

#### Nomes dos Integrantes
- Milton Cezar Bacanieski (RM: 555206)
- Vitor Bebiano Mulford (RM: 555026)
- Lorenzo Mangini (RM: 554901)

#### Descrição

Este projeto é uma aplicação de monitoramento de temperatura e pH usando um Arduino e um display LCD. Ele foi desenvolvido para fornecer uma interface simples e eficaz para ler e exibir os valores de sensores de temperatura e pH, ideal para uso em diversas situações, como em aquários, laboratórios e processos industriais.

#### Funcionalidades

- **Leitura de Temperatura:** O sistema lê a temperatura ambiente utilizando um sensor de temperatura conectado ao Arduino. O valor lido é convertido para graus Celsius.
- **Leitura de pH:** O sistema lê o valor de pH utilizando um sensor específico para medir o pH, que também está conectado ao Arduino. O valor lido é convertido para uma escala típica de 0 a 14.
- **Exibição em LCD:** Os valores de temperatura e pH são exibidos em tempo real em um display LCD 16x2, permitindo uma visualização clara e direta das leituras.
- **Tela de Inicialização:** Ao ligar o sistema, uma tela de boas-vindas é exibida no LCD, proporcionando uma experiência de usuário mais amigável e profissional.

#### Estrutura do Código

O código é dividido em várias partes principais, que serão descritas a seguir:

##### 1. Inicialização

- **Inclusão da Biblioteca:** A biblioteca LiquidCrystal é incluída para controlar o display LCD.
- **Definição dos Pinos:** São definidos os pinos do Arduino aos quais o LCD e os sensores estão conectados.
- **Configuração do LCD:** O LCD é inicializado com 16 colunas e 2 linhas.

##### 2. Função `setup()`

Esta função é executada uma vez quando o Arduino é ligado ou reiniciado. As principais ações realizadas são:

- **Inicialização do LCD:** Configura o display LCD.
- **Tela de Inicialização:** Exibe uma mensagem de boas-vindas e uma animação simples no LCD, utilizando a função `showStartupScreen()`.

##### 3. Função `loop()`

Esta função é executada continuamente, permitindo a leitura e exibição dos valores dos sensores. As principais ações realizadas são:

- **Leitura dos Sensores:** As funções `lerTemperatura()` e `lerPH()` são chamadas para obter os valores atuais dos sensores de temperatura e pH, respectivamente.
- **Atualização do LCD:** O display LCD é limpo e os valores de temperatura e pH são exibidos. A atualização ocorre a cada segundo.

##### 4. Funções de Leitura

- **`lerTemperatura()`:** Esta função lê o valor do sensor de temperatura (um valor analógico), converte para tensão e depois para graus Celsius.
- **`lerPH()`:** Esta função lê o valor do sensor de pH (um valor analógico) e converte para uma escala de 0 a 14, utilizando a função `map()`.

##### 5. Função `showStartupScreen()`

Esta função exibe uma tela de inicialização no LCD ao ligar o sistema. As ações realizadas incluem:

- **Mensagem de Boas-Vindas:** Exibe "Bem-vindo a LCV!".
- **Animação de Rolagem:** Faz uma rolagem do display para a esquerda para mostrar uma animação simples.
- **Animação de Pontos:** Exibe uma sequência de pontos na tela para criar um efeito visual interessante antes de iniciar a leitura dos sensores.

#### Funcionamento

- **Ligar o Sistema:** Ao ligar o Arduino, o LCD exibirá uma mensagem de boas-vindas e uma animação.
- **Leitura Contínua:** Após a inicialização, o sistema entra em um loop onde lê continuamente os valores dos sensores de temperatura e pH.
- **Exibição dos Valores:** Os valores lidos são exibidos no LCD, atualizando a cada segundo. A temperatura é exibida em graus Celsius e o pH em uma escala de 0 a 14.

#### Instruções de Uso

1. **Conexões Físicas:**
   - Conecte os sensores de temperatura e pH aos pinos correspondentes no Arduino (consulte o código-fonte para os pinos exatos).
   - Conecte o display LCD ao Arduino conforme descrito no código.

2. **Dependências:**
   - Este projeto requer a biblioteca LiquidCrystal.h para controlar o display LCD. Certifique-se de tê-la instalada em sua IDE Arduino.

3. **Compilação e Upload:**
   - Abra o arquivo "main.cpp" em sua IDE Arduino.
   - Compile o código e faça o upload para o seu Arduino.

4. **Execução:**
   - Ligue o Arduino. O display LCD exibirá uma mensagem de boas-vindas e uma animação.
   - Os valores de temperatura e pH serão exibidos em tempo real no display LCD.

#### Aplicações

Este projeto pode ser aplicado em diversos contextos, tais como:

- **Aquários:** Monitoramento da temperatura e do pH da água para garantir condições ideais para os peixes.
- **Laboratórios:** Monitoramento de soluções químicas em experimentos.
- **Processos Industriais:** Controle de temperatura e pH em processos de fabricação e tratamento de água.

#### Links 
- [Vídeo Demonstrativo no YouTube](https://www.youtube.com/watch?v=SXDZSCt7dac)
- [Simulação no Tinkercad](https://www.tinkercad.com/things/eLHkG26VK7b-lcv-monitoramento-temp-e-ph)
