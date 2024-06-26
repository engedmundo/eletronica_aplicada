# 1 - Formulação verbal do problema
O cilindro de uma prensa para estampagem deve avançar com, no mínimo, uma das seguintes condições de comando satisfeita:

1) Os dois botões manuais devem estar acionados
2) A grade de proteção deve estar fechada e o pedal acionado
3) A grade de proteção deve estar fechada e um dos dois comandos manuais deve estar acionado

# 2 - Elaboração de uma tabela de correspondência lógica

| Variável              | Tipo     | Notação | Correspondência lógica |
| -                     | -        | -       | -                      |
| Botão Manual Esquerdo |  Entrada | B1   | Botão acionado -> B1 = 1 |
| Botão Manual Direito  |  Entrada | B2   | Botão acionado -> B2 = 1 |
| Grade de proteção     |  Entrada | G    | Grade fechada -> G = 1 |
| Pedal Acionamento     |  Entrada | P    | Pedal acionado -> P = 1 |
| Cilindro prensa       |  Saída   | C    | Cilindro avançado -> C = 1 |


# 3 - Elaboração de uma tabela verdade
Combinações possíveis -> 4 variáveis

$2^4 = 16$

16 combinações

| B1 | B2 | G | P | **C** |
| -  | -  | - | - | -     |
| 0  | 0  | 0 | 0 | 0     |
| 0  | 0  | 0 | 1 | 0     |
| 0  | 0  | 1 | 0 | 0     |
| 0  | 0  | 1 | 1 | 1     |
| 0  | 1  | 0 | 0 | 0     |
| 0  | 1  | 0 | 1 | 0     |
| 0  | 1  | 1 | 0 | 1     |
| 0  | 1  | 1 | 1 | 1     |
| 1  | 0  | 0 | 0 | 0     |
| 1  | 0  | 0 | 1 | 0     |
| 1  | 0  | 1 | 0 | 1     |
| 1  | 0  | 1 | 1 | 1     |
| 1  | 1  | 0 | 0 | 1     |
| 1  | 1  | 0 | 1 | 1     |
| 1  | 1  | 1 | 0 | 1     |
| 1  | 1  | 1 | 1 | 1     |


# 4 - Obtenção de uma equação booleana simplificada

| - | $\overline{G}$ $\overline{P}$ | $\overline{G}$ $P$ | $G$ $P$ | $G$ $\overline{P}$ |
| - | - | - | - | - | 
| $\overline{B1}$ $\overline{B2}$ | 0 | 0 | 1 | 0 | 
| $\overline{B1}$ $B2$            | 0 | 0 | 1 | 1 | 
| $B1$ $B2$                       | 1 | 1 | 1 | 1 | 
| $B1$ $\overline{B2}$            | 0 | 0 | 1 | 1 | 

$C = S_1 + S_2 + S_3 + S_4 $

$S_1 = B1 * B2$

$S_2 = G * P$

$S_3 = B2 * G$

$S_4 = B1 * G$

Substituindo as saídas parciais, temos:


$C = (B1 * B2) + (G * P) + (B2 * G) + (B1 * G)$

Colocando $G$ em evidência, temos:

$C = (B1 * B2) + (G * P) + G(B1 + B2)$

# 5 - Elaboração de um fluxograma lógico

No SimulIDE

![figura](diagrama7-1.PNG)

# 6 - Execução física do sistema

No TinkerCAD:
![figura](execucao.PNG)
