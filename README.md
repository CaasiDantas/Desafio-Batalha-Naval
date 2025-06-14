# Batalha Naval 

Este projeto em C simula um tabuleiro 10x10 para um jogo de batalha naval, onde diferentes ataques são representados por padrões especiais (formas geométricas) aplicados no tabuleiro. Cada ataque tem uma área de efeito definida por uma matriz 5x5, posicionada no tabuleiro de acordo com coordenadas centrais.

---

## 🛡️ Funcionalidades

- Inicialização de um tabuleiro 10x10 vazio.
- Definição de três tipos de ataque com formatos distintos:
  - **Cone**
  - **Cruz**
  - **Octaedro**
- Aplicação dos ataques no tabuleiro em posições pré-definidas, marcando as áreas afetadas com números diferentes para cada formato:
  - `1` — Ataque Cone
  - `2` — Ataque Cruz
  - `3` — Ataque Octaedro
- Impressão do tabuleiro no console com legendas para colunas (A-J) e linhas (1-10), mostrando visualmente as áreas atingidas.

---

## 📐 Formatos dos Ataques

Cada ataque é representado por uma matriz 5x5 que determina quais posições no tabuleiro serão marcadas como atingidas:

- **Cone:** forma triangular direcionada para cima.
- **Cruz:** formato cruzado com alcance vertical e horizontal.
- **Octaedro:** padrão arredondado e simétrico.

---
