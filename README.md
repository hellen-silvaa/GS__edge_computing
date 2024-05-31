# Projeto Robô Subaquático de Coleta de Dados

## Descrição detalhada do Projeto

Este projeto visa o desenvolvimento de um proto robô subaquático capaz de coletar dados ambientais e geológicos do fundo do mar. O robô é equipado com uma variedade de sensores e sistemas de coleta de amostras para mapeamento detalhado, imageamento e monitoramento ambiental. Ele pode operar tanto como um ROV (Veículo Operado Remotamente) quanto como um AUV (Veículo Submarino Autônomo), dependendo das necessidades da missão.


## Justificativa do projeto


O uso do nosso robô para coletar dados do fundo do mar é crucial para monitorar temperatura, locais com maior incidência de microplásticos e a saúde dos corais, fornecendo informações essenciais para a conservação e pesquisa científica. Nosso robô possui alta capacidade de operar em profundidades extremas e ambientes hostis, onde a pressão e os riscos físicos tornam a intervenção humana impraticável. Ele permite operações prolongadas e eficientes, acessando locais inacessíveis a humanos e fornecendo dados precisos e consistentes para a gestão sustentável dos ecossistemas marinhos.

## Instruções de Uso

### Requisitos

Para operar o robô subaquático, você precisará dos seguintes itens:

- **Hardware:**
  - Robô subaquático com sensores integrados (Sonar, CTD, Câmeras, etc.)
  - Computador de bordo com capacidade de processamento de dados
  - Baterias de alta capacidade
  - Sistema de comunicação acústica
  - Braços robóticos para coleta de amostras (opcional)

- **Software:**
  - Sistema operacional compatível (Linux recomendado)
  - Python 3.8+
  - ROS (Robot Operating System) Noetic
  - Pacotes de software específicos (ver seção de dependências)

### Instalação

1. Clone este repositório em seu ambiente local:
    ```bash
    git clone https://github.com/seu-usuario/projeto-robo-subaquatico.git
    cd projeto-robo-subaquatico
    ```

2. Instale as dependências listadas no arquivo `requirements.txt`:
    ```bash
    pip install -r requirements.txt
    ```

3. Configure o ROS Noetic seguindo as instruções da [documentação oficial do ROS](http://wiki.ros.org/noetic/Installation).

4. Compile o workspace ROS:
    ```bash
    cd ~/catkin_ws
    catkin_make
    source devel/setup.bash
    ```

### Uso

1. Inicialize o master do ROS:
    ```bash
    roscore
    ```

2. Execute os nós ROS para controle do robô:
    ```bash
    rosrun projeto_robo_subaquatico controle_robo.py
    ```

3. Monitore os dados dos sensores utilizando os nós apropriados:
    ```bash
    rosrun projeto_robo_subaquatico monitoramento_sensores.py
    ```

4. Para missões autônomas, configure o arquivo de missão em `config/missao.yaml` e inicie o AUV:
    ```bash
    rosrun projeto_robo_subaquatico auv_missao.py
    ```

## Dependências

Este projeto depende de várias bibliotecas e pacotes. Todas as dependências estão listadas no arquivo `requirements.txt`. As principais são:

- `rospy`
- `sensor_msgs`
- `cv_bridge`
- `opencv-python`
- `numpy`

Para instalar todas as dependências, execute:
```bash
pip install -r requirements.txt
