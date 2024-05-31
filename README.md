# Projeto: Robô Subaquático para Coleta de Dados

## Descrição Detalhada do Projeto

Nosso projeto visa utilizar um robô para coletar dados do fundo do mar, ele é essencial para monitorar a temperatura, identificar áreas com alto índice de microplásticos através de modelagem computacional e sensores que capturam a temperatura do habitat ajudando a identificar o aquecimento das águas do oceano a avaliar a saúde dos corais. 

Essas informações são cruciais para a conservação marinha e a pesquisa científica. O robô foi projetado para operar em profundidades extremas e em ambientes adversos, onde a intervenção humana é inviável devido à pressão e aos riscos físicos. Ele é capaz de realizar operações prolongadas e eficientes, acessando locais inacessíveis aos humanos e fornecendo dados precisos e consistentes para a gestão sustentável dos ecossistemas marinhos.

## Instruções de Uso

### Requisitos e Dependências

Para montar o protótipo do robô subaquático, serão necessários os seguintes itens:

- **Componentes:**
  - 2 Protoboards
  - 2 Motores de Corrente Contínua (CC)
  - Arduino Uno
  - Jumpers
  - Bateria de 9V
  - 2 Potenciômetros simulando o joystick
  - L293D: para controle de velocidade e direção dos motores CC

- **Para uma futura execução do protótipo, pode-se adicionar:**
  - Sistema de comunicação acústica (GPS acústico)
  - Braços robóticos para coleta de amostras 
  - Computador de bordo com capacidade de processamento de dados
  - Módulo sensor Turbidez (Útil para conferir a poluição da água atraves da presença de particulas em suspensão na água)

- **Principais tecnologias utilizadas:**
  - C++
  - Software Tinkercad
  - Sistema operacional compatível


## Explicação do Projeto 

Este projeto consiste em um protótipo de robô marinho controlado por controle remoto, capaz de alcançar profundidades oceânicas sem risco de explosão. O sistema é alimentado por uma bateria de 9V e controlado por um Arduino, atuando como o cérebro do dispositivo. O robô é equipado com dois joysticks para controle de movimento e velocidade, além de um chip L293D para gerenciar esses aspectos de forma eficiente.

## Explicação dos principais componentes

- **Arduino**: O Arduino é responsável pelo controle e processamento de todas as operações do nosso robô marinho. Ele recebe os sinais do controle remoto e os converte em comandos para os motores e outras funcionalidades, como receber os dados do sensor de temperatura.
  
- **Bateria de 9V**: A bateria fornece a energia necessária para o funcionamento do sistema. Sua tensão é adequada para alimentar o Arduino e os outros componentes eletrônicos do protótipo.

- **Joystick**: Representa o controle remoto para enviar comandos para o robô marinho. Os sinais são captados pelo Arduino, que os interpreta e executa as ações correspondentes.

- **Joysticks**: Dois joysticks são empregados para permitir um controle intuitivo sobre o movimento e a velocidade do robô. Eles são conectados ao Arduino e permitem ao operador controlar a direção e a intensidade dos movimentos.

- **L293D**: O L293D é um circuito integrado utilizado para controlar os motores do robô. Ele recebe os sinais do Arduino e os amplifica para fornecer a potência necessária aos motores, permitindo um controle preciso sobre o movimento e a velocidade dentro da água.

## Funcionamento

O Arduino recebe os sinais do controle remoto e os processa para determinar os comandos correspondentes. Esses comandos são então enviados para o L293D, que controla os motores do robô marinho de acordo com as instruções recebidas. Os joysticks permitem ao operador controlar a direção e a velocidade do robô de forma intuitiva e precisa.

## Segurança

Uma das preocupações primárias ao projetar o robô marinho foi garantir sua segurança em profundidades oceânicas. Para evitar o risco de explosão, foram selecionados cuidadosamente os materiais e componentes utilizados na construção do protótipo. é um protótipo que busca garantir a estanqueidade do dispositivo e sua capacidade de suportar a pressão nas profundidades previstas.


### Prototipo final 

Coletor de dados do fundo do mar, monitorando temperatura e identificando áreas com alto índice de microplásticos por meio de modelagem computacional e sensores que capturam a temperatura do habitat, auxiliando na detecção do aquecimento das águas oceânicas e na avaliação da saúde dos corais para uma intervenção rápida e eficaz. 
(Os dados foram gerados aleatoriamente para simular o cálculo que será realizado pela modelagem computacional.)



- Controle eletrônico IoT:

![EDGE de GS ](https://github.com/hellen-silvaa/GS__edge_computing/assets/127620071/91e12b7c-9dbf-4cc7-9d0f-45fed4702ae5)

  

- Quantidade de microplásticos identificados pela camêra e temperatura do oceano:

![img1](https://github.com/hellen-silvaa/GS__edge_computing/assets/127620071/7584c599-7483-4f98-a10b-981d52d6cd92)



- Porcentagem de poluição do oceano analisado:

![22](https://github.com/hellen-silvaa/GS__edge_computing/assets/127620071/096c8d99-f0c9-4f02-9bea-36f8f87b7aa5)



## Contribuição

Contribuições para a melhoria do protótipo são bem-vindas. Se você tiver sugestões, ideias ou correções, sinta-se à vontade para enviar um pull request.



## Integrantes do Grupo:

   - [ Alexia Ramalho: RM 558355](https://www.linkedin.com/in/alexia-ramalho-a81587260/)
   - [ Hellen Silva: RM 559008](www.linkedin.com/in/hellen-silva-)
   - [ Lorenzo: RM 557397](https://www.linkedin.com/in/lorenzo-acquesta/)

