# 1 - Formulação verbal do problema
Um cilindro para alimentação de peças a partir de um depósito deve avançar após ser dado um sinal de acionamento **manual** ou **pedal**, **se houver** peças no referido depósito. Caso não haja peças, além de não acontecer o avanço do cilindro, deve ser dado um alarme acústico assim que, e somente se, for dado o sinal de início do comando, seja manualmente ou por pedal.

# 2- Elaboração de uma tabela de correspondência lógica

| Variável       | Notação | Tipo    | Correspondência lógica         |
| -              | -       | -       | -                              |
| Acion. manual  | $B$     | Entrada | Botão pressionado -> $B = 1$   |
| Pedal          | $P$     | Entrada | Pedal pressionado -> $P = 1$   |
| Depósito Peças | $D$     | Entrada | Dep. tem peças    -> $D = 1$   |
| Cilindro       | $C$     | Saída   | Cilindro avançado -> $C = 1$   |
| Sinal Sonoro   | $S$     | Saída   | Sinal sonoro lig. -> $S = 1$   |

# 3 - Elaboração de tabela verdade
Quantidade de variáveis de entrada = 3 

Número de combinações possíveis entre as variáveis de entrada: $2^3 = 8$ combinações

| $B$ | $P$ | $D$ | $C$ | $S$ |
|  -  |  -  |  -  |  -  |  -  |
|  0  |  0  |  0  |  0  |  0  |
|  0  |  0  |  1  |  0  |  0  |
|  0  |  1  |  0  |  0  |  1  |
|  0  |  1  |  1  |  1  |  0  |
|  1  |  0  |  0  |  0  |  1  |
|  1  |  0  |  1  |  1  |  0  |
|  1  |  1  |  0  |  0  |  1  |
|  1  |  1  |  1  |  1  |  0  |


# 4 - Obtenção da equação booleana simplificada
## Mapa de Veitch-Karnaugh - $C$

|  | $\overline{B}$ $\overline{P}$ | $\overline{B}$ $P$ | $B$ $P$ | $B$ $\overline{P}$ |  |
| - | -  | -  | -  | -  | -                               |
|   | 00 | 01 | 11 | 10 |                                 |
|0  | 0  | 0  | 0  | 0  | $\overline{D}$|
|1  | 0  | 1  | 1  | 1  | $D$          |

$$C = C_1 + C_2$$

$$C_1 = D * B$$

$$C_2 = D * P$$

$$C = (D * B) + (D * P)$$

$$C = D * (B + P)$$

## Mapa de Veitch-Karnaugh - $S$
|  | $\overline{B}$ $\overline{P}$ | $\overline{B}$ $P$ | $B$ $P$ | $B$ $\overline{P}$ |  |
| - | -  | -  | -  | -  | -                               |
|   | 00 | 01 | 11 | 10 |                                 |
|0  | 0  | 1  | 1  | 1  | $\overline{D}$|
|1  | 0  | 0  | 0  | 0  | $D$          |

$$S = S_1 + S_2$$

$$S_1 = \overline{D} * P$$

$$S_2 = \overline{D} * B$$

$$S = (\overline{D} * P) + (\overline{D} * B)$$

$$S = \overline{D} * (P + B)$$
